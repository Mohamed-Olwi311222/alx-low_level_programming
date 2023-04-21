#include "3-calc.h"
/**
 * get_op_func - function to select the correct function of ops
 * @s: operators
 * Return: NULL if no op selected otherwise result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == s[0] && s != NULL)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
