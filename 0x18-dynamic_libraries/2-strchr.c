#include "main.h"
#include <stddef.h>
/**
 * _strchr - search for first occurrence of a provided char
 * @s: string to search in
 * @c: character too search for
 * Return: ptr to first occcurence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
