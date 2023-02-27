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
 *rev_string - Write a function that reverses a string
 *
 *@s: reference to the string to reverse
 */

void rev_string(char *s)
{
	int str_length = _strlen(s);
	int i = 0;

	for (i = str_length / 2; i >= 0; i--)
	{
		char c1 = s[str_length - i], c2 = s[i], c3 = c1;

		s[str_length - i] = c2;
		s[i] = c3;
	}
}
