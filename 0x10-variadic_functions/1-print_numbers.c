#include "variadic_functions.h"
/**
 * print_numbers - print numbers given to it
 * @separator: seperator of the nums
 * @n: the number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nptr;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(nptr, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(nptr, unsigned int));
		if (i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nptr);
}
