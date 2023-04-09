#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read a text file and printf on stdout
 * @filename: filename
 * @letters: num
 * Return: numbers of printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printed = 0;
	char *buff;
	int fd = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = (char *)malloc(letters * sizeof(*buff));
	if (buff == NULL)
		return (0);

	read(fd, buff, letters);
	printed = write(STDOUT_FILENO, buff, letters);
	fd = close(fd);
	if (fd == -1)
		return (0);
	return (printed);
}
