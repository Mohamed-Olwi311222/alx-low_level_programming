#include "main.h"
/**
 * rev_string - reverse a string from main
 * @s: recive it from main
 * Return: no return value (void)
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char tmp;
	int i;

	for (i = 0; i < middle; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
