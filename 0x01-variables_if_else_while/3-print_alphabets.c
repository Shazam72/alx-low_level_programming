#include <stdio.h>

/**
 * main - Main program function
 * Return: 0 if no problem appear
 */

int main(void)
{
	for (int i = 97; i < (97 + 26); i++)
		putchar(i);

	for (int i = 65; i < (65 + 26); i++)
		putchar(i);

	putchar('\n');
	return (0);
}
