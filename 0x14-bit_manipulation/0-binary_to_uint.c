#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0 if there is non 0,1 char | !b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		integer = integer *2 + (*b - '0');
		b++;
	}
	return (integer);
}
