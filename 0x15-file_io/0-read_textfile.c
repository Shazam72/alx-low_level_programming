#include "main.h"

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
	size_t i = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = (char *)malloc(letters * sizeof(*buff));
	if (buff == NULL)
		return (0);

	read(fd, buff, letters);
	for (i = 0; i <= letters && buff[i] != '\0'; i++)
	{
		int wr_rslt = 0;

		wr_rslt = write(STDOUT_FILENO, &buff[i], 1);
		if (wr_rslt == -1)
			return (0);
		printed++;
	}
	fd = close(fd);
	if (fd == -1)
		return (0);
	return (printed);
}
