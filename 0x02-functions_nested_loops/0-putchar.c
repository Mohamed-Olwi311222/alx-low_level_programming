#include "main.h"
/**
 * main - print _putchar
 * Return: always 0 (success)
 */
int main(void)
{
	char lol[] = "_putchar";
	
	int size_of_array = sizeof(lol) / sizeof(lol[0]);

	printchar(lol,size_of_array);

	return (0);
}
