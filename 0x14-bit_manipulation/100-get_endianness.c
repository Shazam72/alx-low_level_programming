#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian else 1 for little endian
 */
int get_endianness(void)
{
	unsigned short int n = 1;
	char *pt = (char *)&n;

	return (*pt);
}
