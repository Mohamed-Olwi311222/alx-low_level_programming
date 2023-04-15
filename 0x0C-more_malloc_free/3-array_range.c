#include "main.h"
/**
 * array_range - create an array starting from @min to @max
 *
 * @min: the start of the array
 * @max: the final number to end at
 *
 * Return: returns a pointer to the array made or NULL if failed
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, x;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc(sizeof(int) * (max + 1));
	if (ptr == NULL)
		return (NULL);
	x = min;
	for (i = min; i < max + 1; i++)
	{
		if (x > max)
			break;
		ptr[i] = x;
		x++;
	}
	return (ptr);
}
