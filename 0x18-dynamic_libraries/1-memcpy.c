#include "main.h"
/**
 * _memcpy - copy n bytes of memory from an area to another
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: ptr to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
