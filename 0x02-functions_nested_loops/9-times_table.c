#include "main.h"

/**
 * times_table - function that prints the 9 times table,
 * starting with 0
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (result > 9)
				_putchar(48 + result / 10);
			else
				_putchar(' ');
			_putchar(48 + result % 10);

			if (j == 9)
			{
				_putchar('\n');
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
