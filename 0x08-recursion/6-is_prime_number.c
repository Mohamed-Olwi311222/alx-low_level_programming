#include "main.h"
/**
 * tmp - check whether @n divisable by @x or not
 *
 * @x: get it from is_prime_number which equal to 2
 * @n: the prime to check if it is divisable by @x
 * Return: (int) if n % x == 0 and x <=n returns 1 +
 * tmp with x + 1 , if n % x != 0 and x <= n returns 0 +
 * tmp with x +1
 */
int tmp(int x, int n)
{
	if (n % x == 0 && x <= n)
		return (1 + tmp(x + 1, n));
	else if (n % x != 0 && x <= n)
		return (0 + tmp(x + 1, n));
	else
		return (0);
}
/**
 * is_prime_number - send @n to tmp with @x to check some conditions
 *
 * @n: an int to check if it is a prime or not
 * Return: (int) 1 if its prime and 0 or not
 */
int is_prime_number(int n)
{
	int x = 2;
	int z = tmp(x, n);

	if (z == 1)
		return (1);
	else
		return (0);
}
