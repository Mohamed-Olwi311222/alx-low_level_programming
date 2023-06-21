#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: a pointer to the array
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: if no element matches || size <= 0 return -1 otherwise index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 0)
			return (i);
	return (-1);
}
