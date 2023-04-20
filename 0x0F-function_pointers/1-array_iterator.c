#include "function_pointers.h"
/**
 * array_iterator - function that do action to given array
 * @array: array given
 * @size: size given
 * @action: action given to do
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size != 0)
		action(array[size]);
}
