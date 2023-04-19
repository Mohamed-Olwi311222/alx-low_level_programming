
#include "dog.h"
/**
 * print_dog - print the description of the dog
 * @d: the struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("OWner: %s\n", d->owner ? d->owner : "(nil)");
	}
	else
		printf("\n");
}
