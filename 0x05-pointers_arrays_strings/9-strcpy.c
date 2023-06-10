#include "main.h"
/**
 * char *_strcpy - copy string from 2nd parm to 1st
 * @dest: array from main
 * @src: string from main
 * Return: dest to main
 */
char *_strcpy(char *dest, char *src)
{
	char tmp;
	int len;

	len = _strlen(src);
	for (int i = 0; i <= len; i++)
	{
		tmp = src[i];
		dest[i] = tmp;
	}
	return (dest);
}
