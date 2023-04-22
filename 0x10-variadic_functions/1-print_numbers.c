#include "variadic_functions"
/**
 * print_number - print numbers given to it
 * @seperator: seperator of the nums
 * @n: the number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nptr;
	unsigned int i;
	
	if (seperator == NULL)
		seperator = "";

	va_start(nptr, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d%s", va_arg(nptr, unsigned int), seperator); 
	}
	va_end(nptr);
}
