#include "lists.h"
/**
 * free_list - free a linked list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp = head;
	list_t next;

	if (!head)
		return;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	
}
