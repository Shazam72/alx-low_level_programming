#include <stdlib.h>

/**
 * free_grid - function
 * @grid: 2D array
 * @height: 2D array height
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
