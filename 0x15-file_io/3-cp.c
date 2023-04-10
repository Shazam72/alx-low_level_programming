#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/stat.h>

#define BUFFER_LIMIT 1024

/**
 * exit_100 - print a formated msg and exit
 * @fd: file descriptor
 */
void exit_100(int const fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}


/**
 * exit_io - print a formated msg and exit upon failure on read/write file
 * @fmt: formated string
 * @filename: file name
 * @exit_value: exit value
 */
void exit_io(char const *fmt, char const *filename, int exit_value)
{
	dprintf(STDERR_FILENO, fmt, filename);
	exit(exit_value);
}
/**
 * main - program that copy a file's content to another
 * @argc: number of command line arguments
 * @argv: array that contains command line arguments
 * Return: 0 if no problem appear
 */
int main(int argc, char *argv[])
{
	int fd_input = 0, fd_output = 0, read_res = 0, write_res = 0, err_close = 0;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_input = open(argv[1], O_RDONLY);
	if (fd_input == -1)
		exit_io("Error: Can't read from file %s\n", argv[1], 98);
	fd_output = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_output == -1)
		exit_io("Error: Can't write to %s\n", argv[2], 99);
	buffer = (char *)malloc(sizeof(*buffer) * BUFFER_LIMIT);
	while (1)
	{
		read_res = read(fd_input, buffer, BUFFER_LIMIT);
		if (read_res == -1)
			exit_io("Error: Can't read from file %s\n", argv[1], 98);
		if (read_res == 0)
			break;
		write(fd_output, buffer, read_res);
		if (write_res == -1)
			exit_io("Error: Can't write to %s\n", argv[2], 99);
	};
	free(buffer);
	err_close = close(fd_input);
	if (err_close == -1)
		exit_100(err_close);
	err_close = close(fd_output);
	if (err_close == -1)
		exit_100(err_close);
	return (0);
}
