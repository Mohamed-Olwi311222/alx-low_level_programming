#include "main.h"
/**
 * free_grid - free the previously made 2d array
 * @grid: the 2d array
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
