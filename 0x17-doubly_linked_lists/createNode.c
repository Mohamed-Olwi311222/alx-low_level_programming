#include "lists.h"
/**
 * create_new_node - create a new node
 * @val: the value to store inside the newnode
 * Return: a pointer to the newnode
 */
dlistint_t *create_new_node(const int val)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = val;
	newnode->next = NULL;
	newnode->prev = NULL;

	return (newnode);
}

