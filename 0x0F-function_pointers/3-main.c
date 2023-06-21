#include "3-calc.h"
/**
 * main - calculator
 * @argc: the number of arguments typed
 * @argv: array containing strings passed to the command line
 * Return: exit 98 if no.args is wromg, 99 if op is none, 100 if divide by 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2, (*op_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_fun = get_op_func(argv[2]);
	if (!op_fun)
	{
		printf("Error\n");
		exit(99);
	}
	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = op_fun(num1, num2);
	printf("%d\n", result);
	return (0);
}
