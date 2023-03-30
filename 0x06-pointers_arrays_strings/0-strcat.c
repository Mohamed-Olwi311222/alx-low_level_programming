#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: recive it from main
 * @src: appends it to dest
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	*dest = strcat(dest, src);
	return (dest);
}
