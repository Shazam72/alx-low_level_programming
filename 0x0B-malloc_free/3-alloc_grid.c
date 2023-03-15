#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: 2D array width
 * @height: 2D array height
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
		for (; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
