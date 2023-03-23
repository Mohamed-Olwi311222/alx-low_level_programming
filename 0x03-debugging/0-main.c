#include "main.h"

/**
* positive_or_negative - tests function that prints if integer is positive or negative
* @i: gets an int from main
* Return: 0
*/
void positive_or_negative(i)(int i)
{
	if (i < 0)
		printf("%i is negative", i);
	else if (i >0)
		printf("%i is positive", i);
	else
		printf("%i is zero", i);
}
