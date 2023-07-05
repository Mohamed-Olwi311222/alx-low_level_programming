#include "lists.h"
/**
 * free_listint - free a list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	if (!head || !ptr)
		return;
	while (ptr)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
