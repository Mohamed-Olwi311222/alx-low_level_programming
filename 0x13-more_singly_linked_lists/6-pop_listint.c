#include "lists.h"
/**
 * pop_listint - removes the head of the list
 * @head: the head of the list
 * Return: n or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead = (*head)->next;
	int n;

	if (head)
		return (0);
	n = (*head)->n;
	free(*head);
	*head = newhead;
	return (n);
}
