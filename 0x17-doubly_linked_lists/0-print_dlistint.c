#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 * @h: head of the list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
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
