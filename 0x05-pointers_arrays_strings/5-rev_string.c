#include "main.h"

/**
 *rev_string - Write a function that reverses a string
 *
 *@s: reference to the string to reverse
 */

void rev_string(char *s)
{
	int str_length = _strlen(s) - 1;
	int i = 0;

	for (i = (str_length + str_length % 2) / 2; i >= 0; i--)
	{
		char c1 = s[str_length - i], c2 = s[i], c3 = c1;

		s[str_length - i] = c2;
		s[i] = c3;
	}
}
