#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: number of elements of array argv
 * @argv: array that contains command line args
 * Return: always 0 until argv = null
 */
int main(int argc, char *argv[])
{
	if (argv == NULL)
		return (1);
	printf("%i\n", argc - 1);
	return (0);
}
