#include "main.h"

/**
 *_puts - function that prints a string
 *followed by a new line, to stdout
 *
 *@str: reference to the string to print
 */

void _puts(char *str)
{
	char *pt_string = str;

	while (*pt_string != '\0')
	{
		_putchar(*pt_string);
		pt_string++;
	}
	_putchar('\n');
}
