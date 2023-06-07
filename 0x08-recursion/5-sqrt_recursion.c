#include "main.h"
/**
 * tmp - find if x*x == n
 *
 * @x: get it from _sqrt_recursion with value = 1
 * @n: get it from _sqrt_recursion with its value from main
 * Return: (int) x if x*x == n , tmp(n , x+1) if x < n , -1 otherwise
 */
int tmp(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x < n)
		return (tmp(n, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - only invokes tmp
 * @n: the number to get the sqrt for
 * Return: int from tmp
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	return (tmp(n, x));
}
