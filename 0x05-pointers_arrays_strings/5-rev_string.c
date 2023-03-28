#include "main.h"
/**
 * rev_string - reverse a string from main
 * @s: recive it from main
 * Return: no return value (void)
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length;

	char copy[length+1];

	for (; start <= length; start++)
	{
		copy[start] = s[end];
		end--;
	}
}
