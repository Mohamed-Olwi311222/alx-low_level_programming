#include "variadic_functions.h"
/**
 * print_strings - print strings separated by @separator
 * @separator: separator of the strings
 * @n: numbers of strings passed to it
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nptr;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(nptr, n);

	for(i = 1; i <= n; i++)
	{
		if (va_arg(n, char) == NULL)
			prinf("(nil)");
		else
			printf("%s", va_arg(n, char));
		if (i < n)
			printf("%c", separator);
	}
	printf("\n");
	va_end(nptr);
}
