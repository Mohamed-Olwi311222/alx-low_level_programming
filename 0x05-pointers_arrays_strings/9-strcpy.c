#include "main.h"
/**
 * char *_strcpy - copy string from 2nd parm to 1st
 * @dest: array from main
 * @src: string from main
 * Return: dest to main
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}
