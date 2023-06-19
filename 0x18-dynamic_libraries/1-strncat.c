#include "main.h"
/**
 * _strncat - concatenate n character from a source string to another
 * @dest: destination
 * @src: source
 * @n: number of character to concat
 * Return: ptr to source
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
