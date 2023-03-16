#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocate memory for an array
 * @nmemb: number of array elements
 * @size: size of each array elements
 * Return: pointer to the newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	memset(pt, 0, nmemb * size);
	return (pt);
}
