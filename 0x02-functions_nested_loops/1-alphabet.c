#include "main.h"
/**
 * main - print alphabets
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int count;

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
