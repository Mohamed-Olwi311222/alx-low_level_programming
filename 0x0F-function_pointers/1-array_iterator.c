#include "function_pointers.h"
/**
 * array_iterator - a function that excutes a function given as a param
 * @array: a pointer to the array
 * @size: size of the array
 * @action: function to excute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
