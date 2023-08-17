#include "lists.h"
/**
 * listLen - gets the length of the list
 * @h: head of the list
 * Return: the list length
 */
size_t listLen(dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - insert at the required index
 * @h: head of the list
 * @idx: index to insert at
 * @n: value stored of the new node
 * Return: the address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t length = listLen(*h), curr = 0;
	dlistint_t *node = NULL, *newnode = create_new_node(n);

	if (!h || idx > length || !newnode)
		return (NULL);

	if (idx == 0)
	{
		newnode->next = *h;
		if (*h)
			(*h)->prev = newnode;
		(*h) = newnode;
	}
	else
	{
		node = *h;
		while (node && curr < (idx - 1))
		{
			curr++;
			node = node->next;
		}
		if (node == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = node->next;
		newnode->prev = node;
		node->next = newnode;
		node = newnode->next;
		if (node)
			node->prev = newnode;
	}
	return (newnode);
}
