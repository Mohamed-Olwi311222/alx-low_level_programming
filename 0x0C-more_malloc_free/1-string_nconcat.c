#include "main.h"
/**
 * string_nconcat - cocatenates two strings
 *
 * @s1: string no1
 * @s2: string no2
 * @n: number of chars of @s2
 * Return: a pointer to the new string or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, sum, i, x;
	unsigned int length2;
	char *str;
	char tmp;

	length1 = 0;
	length2 = 0;
	sum = 0;
	x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	if (length2 <= n)
		n = length2;
	sum = length1 + n + 1;
	str = (char *) calloc(sum, sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= length1; i++)
	{
		tmp = *(s1 + i);
		*(str + i) = tmp;
	}
	for (i = length1; i < sum; i++)
	{
		if (x == n)
			break;
		tmp = *(s2 + x);
		*(str + i) = tmp;
		x++;
	}
	return (str);
}
