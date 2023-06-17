#include "main.h"
char * _memset(char *s, unsigned int n)
{
	char def = 0;
	char *ptr = s;

	if (s == NULL)
		return (NULL);
	while (n--)
		*s++ = def;
	return(ptr);
}
/**
 * _Calloc - allocates memory for an array
 * @nmeb: number of elements
 * @size: size of them
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
