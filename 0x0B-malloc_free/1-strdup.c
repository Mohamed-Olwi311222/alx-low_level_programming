#include "main.h"
/**
 * _strdup - duplicate an array of chars
 * @str: pointer to the array
 * Return: a pointer to the array
 */
char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *dup;

	while (str[length] != '\0')
		length++;
	dup = (char *) malloc(sizeof(char) * length);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		*(dup + i) = *(str + i);
	return (dup);
}
