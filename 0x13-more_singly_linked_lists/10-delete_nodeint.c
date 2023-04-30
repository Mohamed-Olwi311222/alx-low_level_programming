#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of the list
 * @index: index
 * Return: 1 -> success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;
	unsigned int idx = 0;

	ptr = *head;
	prev = NULL;
	if (!head)
		return (-1);
	while (ptr && idx < index)
	{
		prev = ptr;
		ptr = ptr->next;
		idx++;
	}
	if (!ptr)
		return (-1);
	if (!prev)
		*head = ptr->next;
	else
		prev->next = ptr->next;
	free(ptr);
	return (1);
}
