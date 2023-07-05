#include "lists.h"
/**
 * listint_len - get the number of the list
 * @h: head of the list
 * Return: the number of the elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	if (!h)
		return (count);
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
