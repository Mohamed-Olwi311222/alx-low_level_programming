#include "main.h"
/**
 * _calloc - allocates memory for an array of @nmemb elements of @size bytes
 *
 * @nmemb: number of elements of an arry
 * @size: size of elements
 *
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	int *ptr;

	ptr = (int *) calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
