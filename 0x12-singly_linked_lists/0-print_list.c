#include "lists.h"
/**
 * _strlen - get the length of the string
 * @s: string to count the length of it
 * ReturnL the length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	if (s == NULL)
		return (count);
	while (*(s++))
		c++;
	return (count);
}
/**
 * print_list - prints all elements of the list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		printf("[%d] %s\n", _strlen(ptr->str), ptr->str ? ptr->str : "(nil)");
		count++;
		ptr = ptr->next;
	}
	printf("-> %li elements\n", count);
	return (count);
}
