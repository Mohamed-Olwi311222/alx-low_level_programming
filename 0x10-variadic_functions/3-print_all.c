#include "variadic_functions.h"
/**
 * _char - prints a char
 * @separator: separator of them
 * @b: the argument pointer
 */
void _char(char *separator, va_list n)
{
	printf("%s%c", separator, va_arg(n, int));
}
/**
 * _int - prints an int
 * @separator: separators of them
 * @n: the argument pointer
 */
void _int(char *separator, va_list n)
{
	printf("%s%i", separator, va_arg(n, int));
}
/**
 * _float - prints a float
 * @separator: separator of them
 * @n: the argument pointer
 */
void _float(char *separator, va_list n)
{
	printf("%s%f", separator, va_arg(n, float));
}
/**
 * _string - prints a string
 * @separator: separator of strings
 * @n: the argument pointer
 */
void _string(char *separator, va_list n)
{
	char *str;

	str = va_arg(n, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);0
}
/**
 * print_all - print all types
 * @format: the format given
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, j;
	char * separator;
	_type form;

	separator = "";
	i = 0;
	form[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string},
		{NULL, NULL}
	};
	va_start(ptr, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (form[j].x != NULL)
		{
			if (format[i] == form[j].x[0])
			{
				form[j].f(separator, ptr);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);

}
