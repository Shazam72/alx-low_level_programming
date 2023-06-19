#include "main.h"
/**
 * _isalpha - check if a char is alphabetical
 * @c: char to check
 * Return: 1 if it's alphabetical else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
