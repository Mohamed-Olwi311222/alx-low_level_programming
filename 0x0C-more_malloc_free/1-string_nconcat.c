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
	unsigned int sl1, sl2, sum, k, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	sl1 = strlen(s1);
	sl2 = strlen(s2);
	if (sl2 <= n)
		n = sl2;
	sum = sl2 + n + 1;

	ptr = (char *) calloc(sum, sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= sl1; i++)
		ptr[i] = s1[i];

	for (i = 0, k = 0; i < n; i++, k++)
		ptr[i + sl2] = s2[k];
	
	ptr[n + sl1] = '\0';
	return (ptr);
}
