#include "main.h"
/**
 * _islower - check if a character is a lowercase
 * @c: character to check
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
