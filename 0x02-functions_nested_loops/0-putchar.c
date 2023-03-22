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

	int size_of_array = sizeof(lol) / sizeof(lol[0]);

	
	for (count = 0; count <= size_of_array; count++)
		_putchar(lol[count]);
	_putchar('\n');

	return (0);
}
