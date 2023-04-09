#include "main.h"

/**
 * get_bit - get bi's value at specific index
 * @n: number
 * @index: bit's index
 * Return: bit value at index otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (1 & (n >> index));
}
