#include "dog.h"
/**
 * print_dog - print the given dog info
 * @d: the dog given
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name) ? (d->name) : "(nil)");
	if (d->age == NULL)
		printf("Age: \n");
	else
		printf("Age: %d\n", d->age);
	printf("Owner: %s\n", (d->owner) ? (d->owner) : "(nil)");
}
