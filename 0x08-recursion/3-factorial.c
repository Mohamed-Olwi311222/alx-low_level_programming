#include "main.h"
/**
 * factorial - return the factorial of @n
 *
 * @n: an int from main to get the factorial of it
 * Return: an int (-1 if theres is an error)
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if ( n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
