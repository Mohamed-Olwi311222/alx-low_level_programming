#include "lists.h"
/**
 * delete_node_at_index - delete node at index
 * @head: head of the list
 * @index: index
 * Return: 1 -> success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *prev = NULL;
	unsigned int idx = 0;

	if (!head)
		return (-1);
	while (ptr && idx < index) 
	{
		prev = ptr;
		ptr = ptr->next;
		idx++;
	}
	prev = ptr->next;
	free(ptr);
	return (1);
}
