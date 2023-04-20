#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array to search in
 * @size: size of @array
 * cmp: pointer to the function to be used to compare value
 * Return: -1 if no element found other the index found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && size != 0 && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
			if (array[i] == cmp())
				return (i);
			else
				return (-1);
	}
}
