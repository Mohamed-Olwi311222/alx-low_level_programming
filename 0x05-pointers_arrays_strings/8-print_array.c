#include "main.h"
/**
 * print_array - print array index followed by a comma
 * @a: array from main
 * @n: index number from main
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i",a[i]);
		if (i+1 == n)
			break;
		printf(",");
		printf(" ");
	}
	printf("\n");
}
