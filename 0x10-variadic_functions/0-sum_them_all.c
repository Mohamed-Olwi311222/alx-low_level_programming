#include "variadic_functions.h"
/**
 * sum_them_all - gets the sum of all parameters
 * @n: number of args
 * Return: the sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nptr;
	int sum, i;

	if (n == 0)
		return (0);

	va_start(nptr, n);
	for (i = 1; i <= n; i++)
		sum += va_arg(nptr, n);
	return (sum);

}
