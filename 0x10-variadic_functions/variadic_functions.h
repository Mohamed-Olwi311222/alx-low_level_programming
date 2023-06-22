#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct _type - select a format then use @f to invoke the print function
 * @s: separator
 * @f: pointer to selected function
 */
typedef struct _type
{
	char *s;
	void (*f)(char *, va_list);
} _type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*variadic_functions.h*/
