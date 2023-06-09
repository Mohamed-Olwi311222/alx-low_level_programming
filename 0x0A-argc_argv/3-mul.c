#include "main.h"
/**
 * main - calculate the multiplication of two nums
 * @argc: number of elements of array of argv
 * @argv: array that contains the args passed to the command line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
	printf("%i\n", mul);
	return (0);
}
