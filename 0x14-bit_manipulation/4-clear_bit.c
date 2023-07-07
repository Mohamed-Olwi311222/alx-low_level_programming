#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index
 * @n: the number given
 * @index: index given
 * Return: 1 if it worked otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > sizeof(unsigned long int) * 8 || !n)
		return (-1);
	clear = ~(1 << index);
	*n = *n & clear;
	return (1);
}
