#include "lists.h"
/*
 * add_dnodeint - add a new node at the beginning
 * @head: head of the list
 * @n: the value to store  inside the newnode
 * Return: the address of the newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	if (!head)
		return (NULL);
	newnode = create_new_node(n);

	if (*(head) == NULL)
		*head = newnode;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}

