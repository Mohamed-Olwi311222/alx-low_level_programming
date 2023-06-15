#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string no1
 * @s2: string no2
 * @n: first n btyes of @s2
 * Return: a pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int sl1 = strlen(s1), sl2 = strlen(s2), sum, i, k;
	char *ptr;

	if (sl2 <= n)
		n = sl2;
	sum = sl2 + n + 1;

	ptr = (char *) malloc(sum);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sl1; i++)
		*(ptr + i) = *(s1 + i);

	for (i = sl1, k = 0; i < n; i++, k++)
		*(ptr + i) = *(s2 + k);
	return (ptr);
}