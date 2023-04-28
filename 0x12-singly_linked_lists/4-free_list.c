#include "lists.h"
/**
 * free_list - free a linked list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	if (!head)
		return;
	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	
}
