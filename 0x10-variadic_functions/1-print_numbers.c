#include "variadic_functions.h"
/**
 * print_numbers - print the numbers followed by a new line
 * @separator: the separator used
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == NULL)
		separator = "";
	if (!n)
		return;
	va_start(ptr,n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ptr, unsigned int));
		if (i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
