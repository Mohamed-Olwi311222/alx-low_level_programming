#include "variadic_functions.h"
/**
 * print_strings - print strings separated by @separator
 * @separator: separator of the strings
 * @n: numbers of strings passed to it
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nptr;
	char *str;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(nptr, n);

	for(i = 1; i <= n; i++)
	{
		str = va_arg(nptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nptr);
}
