#include "main.h"
#include <ctype.h>
/**
 * _islower - see if its lowercase or not
 *
 * @c: char c from main3 as an int (ascii)
 *
 * Return: 1 if its lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
