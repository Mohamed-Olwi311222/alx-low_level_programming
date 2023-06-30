#include "lists.h"
/**
 * list_len - gets the number of elements in the list
 * @h: head of the list
 * Return: the number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	printf("-> %li elements\n", count);
	return (count);
}
