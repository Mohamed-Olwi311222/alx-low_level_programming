#include "main.h"
/**
 * print_last_digit - prints the last digit of @n
 * @n: number to print its last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	long int last_digit, nn = n;
	char last_digit_char;

	if (nn < 0)
		nn = -nn;
	last_digit = nn % 10;
	last_digit_char = '0' + last_digit;

	_putchar(last_digit_char);
	return (last_digit);
}
