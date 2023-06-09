#include "main.h"
/**
 * main - print the name of the app followed by a newline
 * @argc: the number of elements in argv array
 * @argv: the array that contains the command line args
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
