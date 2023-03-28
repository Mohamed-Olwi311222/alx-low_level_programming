#include "main.h"
/**
 * print_rev - prints a string from main in reverse
 * @s: recive it from main
 * Return: no return value (void)
 */
void print_rev(char *s)
{
	int i;

	int length = strlen(s) - 1;

	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
