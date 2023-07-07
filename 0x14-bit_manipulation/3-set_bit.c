#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index
 * @n: the number given
 * @index: index given
 * Return: 1 if success otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int set = 1;

	if (index > sizeof(unsigned long int) * 8 || !n)
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
