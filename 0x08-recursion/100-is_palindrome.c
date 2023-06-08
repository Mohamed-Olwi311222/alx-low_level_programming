#include "main.h"
/**
 * tmp - the recursive function
 * @s: string to check if pallindrome
 * @i: left index
 * @j: right index
 * Return: 1 if i > j as its now pallindrom otherwise 0
 */
bool tmp(char *s, int i, int j)
{
	if (i > j)
		return (true);
	else if (s[i] == s[j])
		tmp(s, i + 1, j - 1);
	else
		return (false);
}
/**
 * is_palindrome - check if the string @s is pallindrome
 * @s: string to check
 * Return: 1 if pallindrom 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int size = 0;
	bool ans = false;

	while (s[size] != '\0')
		size++;
	j = tmp(s, i, size);
	if (j == false)
		return (0);
	else
		return (1);
}
