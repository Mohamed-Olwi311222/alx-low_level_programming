#include "lists.h"
/**
 * sum_listint - gets the sum if int
 * @head: head of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
