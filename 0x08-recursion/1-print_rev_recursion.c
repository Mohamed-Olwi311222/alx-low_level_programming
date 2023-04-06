#include "main.h"
/**
 * _puts_recursion - print @s with recursion by pointer arithmetic
 *
 * @s: get it from main
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		printf("%c", *s);
	}
	else
	{
		printf("\n");
	}
}
