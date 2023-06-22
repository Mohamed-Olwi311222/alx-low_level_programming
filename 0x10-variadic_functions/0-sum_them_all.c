#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: the number of parameters
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	if (!n)
		return (0);
	va_start(ptr, n);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}
	va_end(ptr);
	return (sum);
}
