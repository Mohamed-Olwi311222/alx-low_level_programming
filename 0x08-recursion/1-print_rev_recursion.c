#include "main.h"
/**
 * _print_rev_recursion - print @s with recursion by pr arithmetic in reverse
 *
 * @s: get it from main
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
