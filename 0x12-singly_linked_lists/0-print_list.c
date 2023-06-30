#include "lists.h"
/**
 * print_list - prints all elements of the list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *ptr = h;

	while (ptr)
	{
		printf("[%ld] %s\n", strlen(ptr->str), ptr->str ? ptr->str : "(nil)");
		count++;
		ptr = ptr->next;
	}
	printf("-> %li elements\n", count);
	return (count);
}
