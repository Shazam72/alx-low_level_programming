#include <stdio.h>

/**
* main - Main program function
* Return: 0 if no problem appear
*/

int main(void)
{
	for (int i = 48; i <= 48 + 9; i++)
	{
		putchar(i);
		if (i < 48 + 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
