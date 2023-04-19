#include "dog.h"
/**
 * new_dog - creates a new dog lol
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	if (dog != NULL)
		return (dog);
	else
		return (NULL);
}
