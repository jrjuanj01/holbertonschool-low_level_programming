#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string being copied
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr = str;
	int idx;
	unsigned int strl;

	if (str == NULL)
		return (NULL);
	for (strl = 0; str[strl] != '\0'; strl++)
	{}
	ptr = malloc((strl + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (idx = 0; ptr[idx] == '\0'; idx++)
		ptr[idx] = str[idx];
	return (ptr);
}

#include "dog.h"
#include <stdio.h>
/**
 * new_dog - the information of the new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	(*new_dog).name = _strdup(name);
	(*new_dog).owner = _strdup(owner);
	
	if ((*new_dog).owner == NULL|| (*new_dog).name == NULL)
	{
		free(name);
		free(owner);
		free(new_dog);
		return (NULL);
	}

	(*new_dog).age = age;
	return (new_dog);
}
