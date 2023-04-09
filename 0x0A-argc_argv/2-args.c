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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
