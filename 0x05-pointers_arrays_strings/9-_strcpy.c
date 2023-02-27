#include "main.h"

/**
 *_strcpy - function that copies a string to another
 *
 *@dest: destination where to copy
 *@src: source string
 *
 * Return: a pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; i < _strlen(src); i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
