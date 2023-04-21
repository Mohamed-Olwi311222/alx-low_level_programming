#include "3-calc.h"
/**
 * main - the function to calc
 * @argc: no args
 * @argv: array carrys every arg
 * Return: 0 if success or 98,99,100 otherwise
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][0] == '/' || ((argv[2][0] == '%') && (atoi(argv[3]) == 0)) || b != NULL)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op(a, b));
	return (0);
}
