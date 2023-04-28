#include "lists.h"
/**
 * add_node_end - add node at the end
 * @head: head of the list
 * @str: a string to be duplicated
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
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
	}
	*head = newnode;
	newnode->len = _strlen(newnode->str);
	newnode->next = NULL;
	return (newnode);
}
