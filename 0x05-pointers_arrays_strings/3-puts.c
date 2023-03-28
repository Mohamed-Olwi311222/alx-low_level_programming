#include "main.h"
/**
 * _puts - prints a string from main
 * @str: recive it from main
 * Return: no return value (void)
 */
void _puts(char *str)
{
	int i;

	int length = strlen(str);

	for (i = 0; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
