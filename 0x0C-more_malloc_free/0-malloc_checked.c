#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: an int to store the number of bytes
 * @Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	long int *ptr;

	if (b == 0)
		exit(98);
	ptr = (long int *) malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
