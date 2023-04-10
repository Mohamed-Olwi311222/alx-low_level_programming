#include <stdio.h>
#include <ctype.h>
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
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
