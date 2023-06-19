#include "main.h"
/**
 * _strspn - get number of bytes from a string that consist of accept
 * @s: segment targeted
 * @accept: reference bytes container
 * Return: number of bytes that consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
