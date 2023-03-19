#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the alphabets in lowercase and uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
