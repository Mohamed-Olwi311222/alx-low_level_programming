#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index
 * @n: the number given
 * @index: index given
 * Return: the new value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int one = 1;

	if (index > sizeof(unsigned long int) * 8 || !n)
		return (-1);
	one = 1 << index;
	*n = *n | one;
	return (1);
}
