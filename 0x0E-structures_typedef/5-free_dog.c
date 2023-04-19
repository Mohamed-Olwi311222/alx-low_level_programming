#include "dog.h"
/**
 * free_dog - free dog from memory
 * @d: the dog from main to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
