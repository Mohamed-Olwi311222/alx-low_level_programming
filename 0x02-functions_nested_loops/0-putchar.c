#include "main.h"
/**
 * main - print _putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char lol[] = "_putchar";

	int count = 0;

	int size_of_array = sizeof(lol) / sizeof(lol[0]);


	printchar(lol ,size_of_array ,count);
	return (0);
}
void printchar (char arr[] ,int size_of_array ,int count)
{
	for (count = 0; count < size_of_array; count++)
		_putchar(arr[count]);
	_putchar('\n');
	return;
}

