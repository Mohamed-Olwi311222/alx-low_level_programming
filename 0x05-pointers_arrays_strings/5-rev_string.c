#include "main.h"
/**
 * rev_string - reverse a string from main
 * @s: recive it from main
 * Return: no return value (void)
 */
void rev_string(char *s)
{
	int length = strlen(s) + 1;
	int start = 0;
	int end = length - 10;

	char copy[length];

	for (; start < length; start++)
	{
		copy[start] = s[end];
		end--;
	}
}
