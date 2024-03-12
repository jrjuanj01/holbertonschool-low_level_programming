#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string being copied
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int idx = 0;
	unsigned int strl = 0;

	if (str == NULL)
		return (NULL);
	for (strl = 0; str[strl] != '\0'; strl++)
	{}
	ptr = malloc((strl + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (idx = 0; str[idx] != '\0'; idx++)
		ptr[idx] = str[idx];
	ptr[idx] = '\0';
	return (ptr);
}

#include "dog.h"
#include <stdio.h>
/**
 * new_dog - the information of the new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	(*new_dog).name = _strdup(name);
	(*new_dog).owner = _strdup(owner);
	(*new_dog).age = age;

	if ((*new_dog).owner == NULL || (*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
