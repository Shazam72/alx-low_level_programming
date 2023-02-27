#include "main.h"

/**
*_strlen - function that returns the length of a string
*
*@s: reference to the string to count
*Return: the length of the provided string
*/

int _strlen(char *s)
{
int count = 0;
char *pt_string = s;

while (*pt_string != '\0')
{
count++;
pt_string++;
}

return (count - 1);
}

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
