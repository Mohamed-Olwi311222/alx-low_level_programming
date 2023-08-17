#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 * @h: head of the list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
