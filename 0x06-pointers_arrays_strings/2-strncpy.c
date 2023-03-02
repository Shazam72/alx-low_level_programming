#include "main.h"
#include <string.h>
/**
 *_strncpy - function that copies a string
 *
 *@dest : first operand, string where to append the copy
 *@src : second operand, string to copy
 *@n : number of bytes to copy from src to dest
 *
 *Return: a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i <= n - 1 && src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[n] = '\0';

	return (dest);
}

