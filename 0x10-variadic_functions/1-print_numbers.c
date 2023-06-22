#include "variadic_functions.h"
/**
 * print_numbers - print the numbers followed by a new line
 * @separator: the separator used
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ptr;
	char *s = separator;

	if (s == NULL)
		s = '';
	if (!n)
		return;
	va_start(ptr,n);
	for (i = 2; i <= n; i++)
		_putchar((char) va_arg(ptr, n));
}
