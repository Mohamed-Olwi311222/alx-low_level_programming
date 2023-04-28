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
	list_t *n = h;
	size_t count = 0;

	while (n)
	{
		count++;
		if (n->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", _strlen(n->str), n->str);
		}
		n = n->next;
	}
	return (count);
}
