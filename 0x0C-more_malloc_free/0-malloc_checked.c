/**
 * malloc_checked - return a pointer pointing to @b
 *
 * @b: size of memory
 * Return: @b or exit 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	else
		return (ptr);
}
