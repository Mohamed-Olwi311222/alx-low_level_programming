#include "main.h"
/**
 * rev_string - reverse a string from main
 * @s: recive it from main
 * Return: no return value (void)
 */
void rev_string(char *s)
{
	int length = strlen(s) + 1;
	int middle = length / 2;
	char tmp;

	for (int i = 0; i < middle; i++)
	{
		tmp = string[i];
		string[i] = string[length-i-1]
		string[length-i-1] = tmp;
	}
}
