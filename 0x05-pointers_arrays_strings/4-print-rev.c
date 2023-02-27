#include "main.h"

/**
 *print_rev - function that prints a string in reverse
 *followed by a new line, to stdout
 *
 *@s: reference to the string to print
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
