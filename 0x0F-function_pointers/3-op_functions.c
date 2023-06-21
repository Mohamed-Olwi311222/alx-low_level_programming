#include "3-calc.h"
/**
 * op_add - returns the sum of a & b
 * @a: augend
 * @b: addend
 * Return: Sum
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - returns the difference
 * @a: minuend
 * @b: subtrahend
 * Return: the difference
 */
int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}
/**
 * op_mul - return the multiplication
 * @a: factort 1
 * @b: factor 2
 * Return: the product of a * b
 */
int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}
/**
 * op_div - return the divison
 * @a: dividend
 * @b: divisor
 * Return: the divison
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}
/**
 * op_mod - return the remainder
 * @a: dividend
 * @b: divisor
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
