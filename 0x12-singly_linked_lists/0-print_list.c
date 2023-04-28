#include "lists.h"
/**
 * _strlen - get the length of a string
 * @s: a string to count the length of it
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		c++;
	return (c);
}
/**
 * print_list - print a linked list
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (const list_t *tmp = h; tmp != NULL; tmp = tmp->next)
	{
		printf("[%d] %s\n", _strlen(tmp->str), tmp->str ? tmp->str : "(nil)");
		count++;
	}
	return (count);
}
