#include "main.h"
char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0, sum = 0, i = 0, x = 0;
	char *str;
	char tmp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	sum = length1 + length2 + 1;
	str = (char *) malloc(sizeof(char) * sum);
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= length1; i++)
	{
		tmp = *(s1 + i);
		(str + i) = tmp;
	}
	for (i = length1; i < sum; i++)
	{
		tmp = *(s2 + x);
		*(str + i) = tmp;
		x++;
	}
	return (str);
}
