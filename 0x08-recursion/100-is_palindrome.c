#include "main.h"
/**
 * check_pallindrome - the recursive function
 * @s: string to check if pallindrome
 * @i: left index
 * @j: right index
 * Return: true if i > j as its now pallindrom otherwise false
 */
bool check_pallindrome(char *s, int i, int j)
{
	if (i > j)
		return (true);
	else if (s[i] == s[j])
		return (check_pallindrome(s, i + 1, j - 1));
	else
		return (false);
}
/**
 * is_palindrome - call check_pallindrome to check the string
 * @s: string to check
 * Return: 1 if check_pallindrom returns true, 0 otherwise
 */
int is_palindrome(char *s)
{
	int size = strlen(s);
	bool ans = false;

	if (size == 0 || size == 1)
		return (1);

	ans = check_pallindrome(s, 0, size - 1);
	if (ans == false)
		return (0);
	else
		return (1);
}
