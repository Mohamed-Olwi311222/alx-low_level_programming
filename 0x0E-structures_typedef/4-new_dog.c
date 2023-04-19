#include "dog.h"
/**
 * _strncpy - copy string from src to dest
 * @dest: destination of the copy
 * @src: source of the operation
 * Return: dest (char type)
 */
char *_strncpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog lol
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL || age <= 0)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));


	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
		return (NULL);

	dog->name = _strncpy(dog->name, name);
	dog->age = age;
	dog->owner = _strncpy(dog->owner, owner);

	if (dog != NULL)
		return (dog);
	else
		return (NULL);
}
