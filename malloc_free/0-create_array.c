#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: wanted amount of space
 * @c: character being allocated
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int idx;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (idx = 0; ptr[idx] == '\0'; idx++)
		ptr[idx] = c;
	return (ptr);
}
