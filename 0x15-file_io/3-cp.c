#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_LIMIT 1024

/**
 * main - program that copy a file's content to another
 * @argc: number of command line arguments
 * @argv: array that contains command line arguments
 * Return: 0 if no problem appear
 */
int main(int argc, char *argv[])
{
	int fd_input = 0, fd_output = 0, read_res = 0;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_input = open(argv[1], O_RDONLY);
	if (fd_input == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_output = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_output == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	buffer = (char *)malloc(sizeof(*buffer) * BUFFER_LIMIT);
	do {
		read_res = read(fd_input, buffer, BUFFER_LIMIT);
		write(fd_output, buffer, read_res);
	} while (read_res != 0);
	if (close(fd_input) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_input);
		exit(100);
	}
	if (close(fd_output) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_output);
		exit(100);
	}
	return (0);
}
