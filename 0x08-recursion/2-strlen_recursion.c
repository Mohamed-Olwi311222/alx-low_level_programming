#include "main.h"
/**
 * _strlen_recursion - get the length of a string @s
 *
 * @s: string from main to count its letters
 * Return: the length of @s (int)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
