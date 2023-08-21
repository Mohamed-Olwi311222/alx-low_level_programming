#include "main.h"
/**
 * _strncpy - copy string from src to dest
 * @dest: destination of the copy
 * @src: source of the operation
 * @n: number of chars
 * Return: a pointer to the new copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char tmp;
	int i;

	for (i = 0; i <= n; i++)
	{
	tmp = src[i];
	dest = dest + tmp;
	}
	return (dest);
}
