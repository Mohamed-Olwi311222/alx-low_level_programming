#include "main.h"
/**
 * puts2 - print every 2 characters of a string
 * @str: recive it from main
 * Return: no return value (void)
 */
void puts2(char *str)
{
	int length = strlen(str);
	int count;

	for (count = 0; count < length; count++)
	{
		if (count % 2 != 0 && count != 0)
			continue;
		else
			_putchar(str[count]);
	}
	_putchar('\n');
}
