#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the alphabets in reverse
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
