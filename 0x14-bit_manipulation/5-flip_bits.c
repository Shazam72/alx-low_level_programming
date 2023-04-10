#include "main.h"
/**
 * flip_bits - get number of bits to flip from a number to another
 * @n: first operand
 * @m: second operand
 * Return: number of bit to flip
 */
unsigned int flip_bits(unsigned long n, unsigned long m)
{
	unsigned int count = 0, tmp = 0;

	tmp = m ^ n;
	while (tmp != 0)
	{
		count += tmp & 1;
		tmp >>= 1;
	}
	return (count);
}
