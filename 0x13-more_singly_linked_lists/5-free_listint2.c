#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	if (!head || !(*head))
		return;

	free_listint2(&(*head)->next);
	*head = NULL;
}
