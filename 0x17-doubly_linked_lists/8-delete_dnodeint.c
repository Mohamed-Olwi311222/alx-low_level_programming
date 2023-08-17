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
 * delete_dnodeint_at_index - delete the required node
 * @h: head of the list
 * @index: index of the wanted node to be removed
 * Return: the value inside the deleted node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t length = listLen(*head);
	size_t curr = 0;
	dlistint_t *prev_node = NULL;
	dlistint_t *curr_node = NULL;

	if (!head || index >= length || !(*head))
		return (-1);

	if (index == 0)
	{
		prev_node = *head;
		curr_node = prev_node->next;
		*head = curr_node;
		if (prev_node->next)
			curr_node->prev = NULL;
		free(prev_node);
	}
	else
	{
		prev_node = NULL;
		curr_node = *head;
		while (curr_node && curr < index)
		{
			prev_node = curr_node;
			curr_node = curr_node->next;
			curr++;
		}
		prev_node->next = curr_node->next;
		free(curr_node);
		curr_node = prev_node->next;
		if (curr_node)
			curr_node->prev = prev_node;
	}
	return (1);
}
