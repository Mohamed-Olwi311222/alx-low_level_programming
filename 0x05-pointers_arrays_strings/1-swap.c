#include "main.h"
/**
 * swap_int - swap two inputs from main
 *
 * @a: take it from main and swap it with b
 * @b: take it from main and swap it with a
 * Return: no return value (void)
 */
void swap_int(int *a, int *b)
{
	int *c = a;

	a = b;
	b = *c;
}
