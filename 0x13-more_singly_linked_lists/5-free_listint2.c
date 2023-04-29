#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (ptr)
	{
		*head = (*head)->next;
		free(ptr->n);
		free(ptr);
		ptr = *head;
	}
	*head = NULL;
}
