#include "main.h"
/**
 * _strpbrk - locate first of @accept
 * @s: string where search is made
 * @accept: string where searched bytes are located
 * Return: ptr to first occurrence of @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return (s);
}
