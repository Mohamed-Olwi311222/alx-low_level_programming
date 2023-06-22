#include "variadic_functions.h"
/**
 * print_strings - a function that prints strigns
 * @separator: separator used
 * @n: count of the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	if (separator == NULL)
		separator = "";
	va_start(ptr, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(ptr, char *);
		printf("%s", (str) ? (str) : "(nil)");
		if (i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
