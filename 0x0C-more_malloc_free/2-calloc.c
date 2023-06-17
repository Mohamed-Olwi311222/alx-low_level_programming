#include "main.h"
/**
 * _memset - assign default values to @s
 * @s: array of chars
 * @n: size of array
 * Return: a pointer to the array with def values
 */
char *_memset(char *s, unsigned int n)
{
	char def = 0;
	char *ptr = s;

	if (s == NULL)
		return (NULL);
	while (n--)
		*s++ = def;
	return (ptr);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of them
 * Return: a pointer the array made
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, sizeof(int) * nmemb);
	return (ptr);
}
