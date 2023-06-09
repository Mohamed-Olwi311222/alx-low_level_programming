#include "main.h"
/**
 * main - print all arguments passed with each with a new line
 * @argc: number of elements of array of argv
 * @argv: array that contains the args passed to the command line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
