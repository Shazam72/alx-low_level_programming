#include <stdlib.h>
/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: array to use
 * @size: size of array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!action || size == 0 || !array)
		return;

	for (; i < size; i++)
		action(array[i]);
}
