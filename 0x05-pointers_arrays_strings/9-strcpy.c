#include "main.h"
/**
*_strlen - function that returns the length of a string
*
*@s: reference to the string to count
*Return: the length of the provided string
*/

int _strlen(char *s)
{
int count = 0;
char *pt_string = s;

while (*pt_string != '\0')
{
count++;
pt_string++;
}

return (count - 1);
}
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
