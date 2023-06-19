#include "main.h"
/**
 * _abs - get absolute value of a number
 * @i: number
 * Return: absolute value
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
