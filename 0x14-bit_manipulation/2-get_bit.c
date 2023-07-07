#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number given
 * @index: index given
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & num);
}
