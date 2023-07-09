#include "main.h"
/**
 * print_binary - converts an int to binary
 * @n: the int to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int active;

	if (n == 0)
	{
		printf("0");
		return;
	}
	active = 1;
	while (active <= n)
		active <<= 1;
	active >>= 1;
	while (active > 0)
	{
		if (n & active)
			printf("1");
		else
			printf("0");
		active >>= 1;
	}
}
