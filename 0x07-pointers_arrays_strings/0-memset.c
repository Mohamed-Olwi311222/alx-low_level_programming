#include "main.h"
/**
 * _memset - behave like memset from string.h library
 * @s: the string that will @b  be added to
 * @b: the string that will be added to @s
 * @n: number of chars from @s that will be added
 * return: char to main (@s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int start;
	int end;
	int count;

	start = 0;
	end = n;

	for (count = start; count < end; count++)
		s[count] = b;
	return (s);

}
