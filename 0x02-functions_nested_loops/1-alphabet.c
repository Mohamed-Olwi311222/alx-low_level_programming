#include "main.h"
/**
 * main - print alphabets
 *
 * Return: always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	return;
}
