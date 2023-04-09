#include "main.h"
#include <unistd.h>

/**
 * create_file - function that create a file
 * @filename: file's name
 * @text_content: content to write in the file
 * Return: 1 on success -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	unsigned int i = 0;

	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		for (i = 0; i <= strlen(text_content) && text_content[i] != '\0'; i++)
		{
			int wr_res = 0;

			wr_res = write(fd, &text_content[i], 1);
			if (wr_res == -1)
				return (-1);
		}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
