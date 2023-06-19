#include "main.h"
/**
 * _isdigit - verify if a character is a digit or not
 * @c: char to test
 * Return: 1 if it's a digit else 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
