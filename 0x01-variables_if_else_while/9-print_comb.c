#include <stdlib.h>
#include<stdio.h>
/**
 * main - print numbers from 0 to 9 with , in between
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
		if (x == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
