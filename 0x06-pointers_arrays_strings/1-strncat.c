#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: recive it from main
 * @src: appends it to dest
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
