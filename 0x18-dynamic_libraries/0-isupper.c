#include "main.h"
/**
* _isupper - verify if a character is uppercase or not
* @c: char to test
* Return: 1 if uppercase else 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
