#include "lists.h"

/**
 * print_list - print a linked list
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", strlen(h->str), h->str);
		}
		h = h->next;
	}
	return (count);
}
