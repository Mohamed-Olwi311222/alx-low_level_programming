#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index @idx
 * @head: the head of the list
 * @idx: index of the node to insert it
 * @n: an int to put in the newnode
 * Return: a newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *ptr = *head, *prev = NULL;
	unsigned int index = 0;

	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (ptr)
	{
		prev = ptr;
		ptr = ptr->next;
		index++;
		if (index == idx)
		{
			prev->next = newnode;
			newnode->next = ptr;
			break;
		}
	}
	if (index < idx)
	{
		free(newnode);
		return (NULL);
	}
	return (newnode);
}
