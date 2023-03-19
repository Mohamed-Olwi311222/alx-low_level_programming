#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all alphabets except q and e
 *
 * Return: alwyas 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
