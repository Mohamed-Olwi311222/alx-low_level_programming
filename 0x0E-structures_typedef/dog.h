#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - struct a dog lmao
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */
typdef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
