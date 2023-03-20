#include <stdio.h>
#include <stdlib.h>
/**
 * main - print a combination of  numbers from 1 to 9
 *
 * Return: 0 (always success)
 */
int main(void)
{
int num1, num2, num0;
for (num0 = 0; num0 <= 9; num0++)
{
for (num1 = 0; num1 <= 9; num1++)
{
	for (num2 = 0; num2 <= 9; num2++)
	{
	if (num1 >= num2 || num1 <= num0)
		continue;
	putchar('0' + num0);
	putchar('0' + num1);
	putchar('0' + num2);
	if (num0 == 7 && num1 == 8 && num2 == 9)
	{
		putchar('\n');
		return (0);
	}
	putchar(',');
	putchar(' ');
	}
}
}
return (0);
}
