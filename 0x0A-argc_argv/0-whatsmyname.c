#include <stdio.h>
/**
 * main - program that prints its name and prints a new line
 *
 * @argc: number of arguments passed to the command line
 * @argv: array contains number of args passed to command line
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
