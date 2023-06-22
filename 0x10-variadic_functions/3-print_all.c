#include "variadic_functions.h"
/**
 * _string - prints a string
 * @separator: separator used
 * @ptr: arg list
 */
void _string(char *separator, va_list ptr)
{
	char *str;

	str = va_arg(ptr, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}
/**
 * _float - prints a float
 * @separator: separator used
 * @ptr: arg list
 */
void _float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}
/**
 * _char - prints an char
 * @separator: separator used
 * @ptr: arg list
 */
void _char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}
/**
 * _int - prints an int
 * @separator: separator used
 * @ptr: arg list
 */
void _int(char *separator, va_list ptr)
{
	printf("%s%i", separator, va_arg(ptr, int));
}
/**
 * print_all - prints anything
 * @format: the format to print
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, j;
	char *separator;

	_type type[] = {
		{"s", _string},
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{NULL, NULL}
	};

	i = 0;
	separator = "";
	va_start(ptr, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (type[j].s != NULL)
		{
			if (format[i] == type[j].s[0])
			{
				type[j].f(separator, ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
