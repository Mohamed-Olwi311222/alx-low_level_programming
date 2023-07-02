#include "lists.h"
/**
 * add_node_end - add node at the end
 * @head: head of the node
 * @str: need to be duplicated
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)), *ptr;

	if (!head || !new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	return (new_node);
}
