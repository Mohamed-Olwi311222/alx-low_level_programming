#include "lists.h"
/**
 * get_nodeint_at_index - get the index of the node
 * @head: the head of the node
 * @index: the index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = malloc(sizeof(listint_t));
	unsigned int idx = 0;

	if (!node)
		return (NULL);
	while (idx < index)
	{
		node = head->next;
		idx++;
	}
	return (node);

}
