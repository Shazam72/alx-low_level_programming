#include "main.h"
#include <string.h>
/**
 *_strncat - function that concatenates two strings
 *
 *@dest : first operand, string where to append
 *@src : second operand, string to append
 *@n : number of bytes to append from src to dest
 *
 *Return: a pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_last_char_index = strlen(dest);
	int i = 0;

	for (i = 0; i <= n - 1 && src[i] != '\0'; i++)
	{
		dest[dest_last_char_index + i] = src[i];
	}

	dest[dest_last_char_index + i] = '\0';

	return (dest);
}

