#include <stdlib.h>
/**
 * malloc_checked - function that allocate memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer to the newly allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
