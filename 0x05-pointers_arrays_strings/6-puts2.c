#include "main.h"

/**
 *puts2 - function that prints every other character of a string,
 *starting with the first character, followed by a new line
 *
 *@str: reference to the string to print
 */

void puts2(char *str)
{
	char *pt_string = str;

	while (*pt_string != '\0')
	{
		_putchar(*pt_string);
		pt_string++;
		pt_string++;
	}
	_putchar('\n');
}
