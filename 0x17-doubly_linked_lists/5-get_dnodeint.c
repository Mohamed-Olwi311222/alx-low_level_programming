#include "lists.h"
/**
 * listLen - gets the length of the list
 * @h: head of the list
 * Return: the list length
 */
size_t listLen(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);
	while(h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the required node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t length = listLen(head), curr = 0;
	dlistint_t *node = NULL;

	if (!head || index > (length - 1))
		return (NULL);
	while (head && curr <= index)
	{
		node = head;
		head = head->next;
		curr++;
	}
	return (node);
}
