#include "main.h"
/**
 * puts_half - prints half the string from main
 * @str: recive it from main
 * Return: no return value (void)
 */
void puts_half(char *str)
{
	int middle = (strlen(str) / 2);
	int final = strlen(str);
	int i;

	if (((strlen(str) % 2) != 0))
		middle = ceil((double)strlen(str) / 2);

	for (i = middle; i < final; i++)
		_putchar(str[i]);
	_putchar('\n');
}
