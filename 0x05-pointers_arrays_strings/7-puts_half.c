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
 *puts_half - function that prints half a string
 *followed by a new line, to stdout
 *
 *@str: reference to the string to print
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int i = (length  / 2) + 1;

	for (; i <= length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
