#include "main.h"
/**
 * str_concat  - concatonate s1 and s2
 *
 * @s1: string number 1
 * @s2: string number 2
 *
 * Return: NULL if s1 == NULL or s2 == NULL , pointer concat otherwise
 **/
char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;
	int sum;
	char *concat;
	char tmp;
	int i;
	int x;

	length1 = 0;
	length2 = 0;
	sum = 0;
	x = 0;
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	sum = length1 + length2;
	concat = (char *) malloc(sizeof(char) * sum);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i <= length1; i++)
	{
		tmp = *(s1 + i);
		*(concat + i) = tmp;
	}
	for (i = length1; i < sum; i++)
	{
		tmp = *(s2 + x);
		*(concat + i) = tmp;
		x++;
	}
	return (concat);
}
