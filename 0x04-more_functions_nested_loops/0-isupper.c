#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase letters that get it
 * from main
 * @c: gets it from main
 * Return: 1 if @c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char ch = c;

	int is_upper = isupper(ch);

	if (is_upper > 0)
		return (1);
	else
		return (0);
}