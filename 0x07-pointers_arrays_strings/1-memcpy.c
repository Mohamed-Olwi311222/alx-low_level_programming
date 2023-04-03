#include "main.h"
/**
 * _memcpy - copies @n bytes from memory area @src to memory area @dest
 * @dest: destination of the copy
 * @src: source of the string
 * @n: number of chars to end at
 * Return: @dest to main
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char tmp;
	unsigned int count;

	for (count = 0; count < n; count++)
	{

		tmp = src[count];
		dest[count] = tmp;
	}
	return (dest);
}
