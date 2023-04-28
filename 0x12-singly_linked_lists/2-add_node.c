#include "lists.h"
/**
 * add_node - add node at the beginning
 * @head: head of the list
 * @str: a string to be duplicated
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	if (!newnode || !head)
		return (NULL);
	if (str)
	{
		newnode->str = strdup(str);
		if (newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
