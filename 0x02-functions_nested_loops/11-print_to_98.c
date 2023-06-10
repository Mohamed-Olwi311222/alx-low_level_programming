#include "main.h"
/**
 * print_to_98 - print any number to 98
 * @n: number to count from
 */
void print_to_98(int n)
{
	int i;
	char s;

	if (n == 98)
	{
		s = '0' + 98;
		_putchar(s);
	}

	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			s = '0' + i;
			_putchar(s);
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	else
		for (i = n; i >= 98; i++)
		{
			s = '0' + i;
			_putchar(s);
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
}
