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
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
