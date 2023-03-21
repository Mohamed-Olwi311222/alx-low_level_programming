#include <stdio.h>
/**
 * main - call a function to print the alphabets
 *
 * Return: always 0 (success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
}
