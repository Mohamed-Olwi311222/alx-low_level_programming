#include "main.h"
/**
 * main - print _putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char lol[] = "_putchar";

	int count;

	for (count = 0; count < 8; count++)
		_putchar(lol[count]);
	_putchar('\n');

	return (0);
}
