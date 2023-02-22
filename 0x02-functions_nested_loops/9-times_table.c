#include "main.h"

/**
 * times_table - function that prints the 9 times table,
 * starting with 0
 */
void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
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
