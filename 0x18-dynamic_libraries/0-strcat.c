#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string to add
 * @src: string to add to
 * Return: ptr to dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
