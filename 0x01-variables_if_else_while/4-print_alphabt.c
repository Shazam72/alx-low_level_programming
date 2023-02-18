#include <stdio.h>

/**
 * main - Main program function
 * Return: 0 if no problem appear
 */

int main(void)
{
	for (int i = 97; i < (97 + 26); i++)
		if (i != 101 && i != 113)
			putchar(i);

	putchar('\n');
	return (0);
}
