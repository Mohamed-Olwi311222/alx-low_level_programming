#include "lists.h"
/**
 * add_dnodeint_end - add a new node a the end
 * @head: head of the list
 * @n: the value to store at the new node
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *node = NULL;

	if (!head)
		return (NULL);
	newnode = create_new_node(n);
	node = *head;

	if ((*head) == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = newnode;
		newnode->prev = node;
	}
	return (newnode);
}
