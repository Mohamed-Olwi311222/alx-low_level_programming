#include "lists.h"
/**
 * add_nodeint - add node at the beginning
 * @head: head of the list
 * @n: the member of the int
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);
	if (n)
	{
		newnode->n = n;
	}
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
