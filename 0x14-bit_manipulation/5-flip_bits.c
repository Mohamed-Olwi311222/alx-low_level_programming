#include "main.h"
/**
 * flip_bits - count the number of fliped bits to get a number
 * @n: given number
 * @m: the number to get
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference != 0)
	{
		if (difference & 1)
			count++;
		difference >>= 1;
	}
	return (count);
}
