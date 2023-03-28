#include "main.h"
/**
 * puts_half - prints half the string from main
 * @str: recive it from main
 * Return: no return value (void)
 */
void puts_half(char *str)
{
	int middle = strlen(str) / 2;
	int i;

	for (i = 0; i < middle; i++)
		_putchar(str[i]);
	_putchar('\n');
}
