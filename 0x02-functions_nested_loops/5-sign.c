#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: number to check
 * Return: 1 if +ve , -1 if -ve and 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
