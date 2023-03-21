#include "_putchar.c"
#include "main.hz"
/**
 * main - print _putchar
 * Return: always 0 (success)
 */
int main(void)
{
	char lol[] = "_putchar";

	int count;

	int size;

	size = sizeof(lol) / sizeof(lol[0]);

	for (count = 0; count <= size; count++)
		_putchar(lol[count]);
	_putchar('\n');
	return (0);
}
