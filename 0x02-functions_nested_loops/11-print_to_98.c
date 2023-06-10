#include "main.h"
/**
 * print_to_98 - print any number to 98
 * @n: number to count from
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}

	if (n < 98)
		for (i = n; i <= 98; i++)
			printf("%i, ", i);
	else
		for (i = n; i >= 98; i++)
			printf("%i, ", i);
	_putchar('\n');
}
