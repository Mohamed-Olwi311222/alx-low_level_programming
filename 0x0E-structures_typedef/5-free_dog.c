#include "dog.h"
/**
 * free_dog - free a dog
 * @d: dog given
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
