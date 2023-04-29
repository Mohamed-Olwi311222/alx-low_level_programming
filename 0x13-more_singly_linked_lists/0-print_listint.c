#include "lists.h"
/**
 * print_listint - print a list
 * @h: head of the list
 * Return: the number of elements of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (node)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
