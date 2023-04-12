#include "main.h"
/**
 * _strdup  - make a duplicate of @str
 *
 * @str: string	to dup
 *
 * Return: NULL if str == NULL , pointer dup otherwise
 **/
char *_strdup(char *str)
{
	int length;
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	length = 0;
	while (str[length] != '\0')
		length++;
	dup = (char *) malloc(sizeof(char) * length);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		*(dup + i) = *(str + i);
	return (dup);
}
