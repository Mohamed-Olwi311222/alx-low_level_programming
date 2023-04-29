#include "lists.h"
/**
 * add_nodeint_end - add node at end
 * @head: head of the list
 * @n: the member of the int
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);
	if (n)
	{
		newnode->n = n;
	}
	newnode->next = *head;
	while (newnode)
	{
		newnode = newnode->next;
	}
	return (newnode);
}
