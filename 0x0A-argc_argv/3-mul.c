#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints number of args passed and prints a new line
 *
 * @argv: string of arguments passed to main
 * @argc: number of arguments passed to the command line
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
