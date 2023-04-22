#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct _type - struct type of format
 * @x: format
 * @f: function to print that format
 */
typedef struct _type
{
	char *x;
	void (*f)(char *, va_list);
} _type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
