#include <stdio.h>

/**
* main - Main program function
* Return: 0 if no problem appear
*/

int main(void)
{
	for (int i = 48; i <= 57; i++)
		putchar(i);

	for (char c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
