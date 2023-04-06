#include "main.h"
/**
 * _pow_recursion - get x to the power y with recursion
 *
 * @x: base number
 * @y: power number
 * Return: -1 if @y < 0 and 1 if @y == 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
