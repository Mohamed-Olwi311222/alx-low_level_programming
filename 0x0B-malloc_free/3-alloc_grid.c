#include "main.h"
/**
 * alloc_grid -  make a 2d array
 *
 * @width: the row length
 * @height: the column length
 * Return: a pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, r, c, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * height);
	if (ptr == NULL)
		return (NULL);
	for (r = 0; r < height; r++)
	{
		ptr[r] = malloc(sizeof(*ptr[r]) * width);
		if (ptr[r] == NULL)
		{
			for (i = 0; i < r; i++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			ptr[r][c] = 0;
	}
	return (ptr);

}
