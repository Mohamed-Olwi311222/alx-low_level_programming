#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - determine if a number is positive , negative or zero
 *@i: gets it from main.c
 * Return: no return value
 */
void positive_or_negative(int i)
{

	if (i < 0)
	{
		printf("%i is negative\n", i);
	} else if (i > 0)
	{
		printf("%i is positive\n", i);
	} else
	{
		printf("%i is zero\n", i);
	}
}

