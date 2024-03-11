#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes the variables for struct dog
 * @d: dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d == NULL)
		return;

	struct dog;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
