#include "main.h"
/**
 * _isalpha - checks if @c is an alphanumeric or not
 * @c: character to check
 * Return: 1 if true otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	return (0);
}
