#include "main.h"
/**
 * create_array - create array of chars and store it in @c
 * @size: size of the array
 * @c: Array name
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		*(ptr + count) = c;
	return (ptr);
}
