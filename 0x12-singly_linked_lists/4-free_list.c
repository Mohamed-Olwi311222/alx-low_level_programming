#include "lists.h"
/**
 * free_list - free a list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	if (head == NULL)
		return;

	current = head;
	while (current->next != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
