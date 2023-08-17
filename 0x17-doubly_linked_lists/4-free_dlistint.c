#include "lists.h"
/**
 * free_dlistint - free dlistint
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;

	if (!head)
		return;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
