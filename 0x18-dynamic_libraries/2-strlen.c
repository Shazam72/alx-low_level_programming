#include "main.h"
/**
 * _strlen - get a string length
 * @s: string to count
 * Return: string length
 */
int _strlen(char *s)
{
	int n = 0;

	for (n = 0; s[n]; n++)
		;
	return (n);
}
