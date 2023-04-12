#include "main.h"
/**
 * _strdup  - make a duplicate of @str
 *
 * @str: string	to dup
 *
 * Return: NULL if str == NULL , pointer ptr otherwise
 **/
char *_strdup(char *str)
{
	int length;
	int i;
	char *dup;

	while (*str[length] != '\0')
		length++;
	dup = (char *) malloc(sizeof(char) * lenght);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		*(dup + i) = *(str + i);
	return (dup);
}
