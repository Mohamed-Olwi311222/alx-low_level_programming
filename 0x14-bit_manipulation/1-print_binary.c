#include "main.h"
/**
 * print_binary - converts int to binary
 * @n: the int to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	char str[20];

	if(!n)
		return;
	sprintf(str, "%ld", n);
	bin = strtoul(str, NULL, 2);
	printf("%ld\n", bin);

}
