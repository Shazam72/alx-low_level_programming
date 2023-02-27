#include "main.h"

/**
 *puts_half - function that prints half a string
 *followed by a new line, to stdout
 *
 *@str: reference to the string to print
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int i = length % 2 == 0 ? length / 2 : (length - 1) / 2;

	for (; i <= length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
