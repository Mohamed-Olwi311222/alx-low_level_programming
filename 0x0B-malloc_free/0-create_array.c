#include "main.h"
/**
 * create_array - make an array of size @size
 *
 * @size: size of chars to make
 * @c: intialized char
 *
 * Return: NULL if size == 0 , pointer ptr otherwise
 **/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(sizeof(char) * size);
	
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
