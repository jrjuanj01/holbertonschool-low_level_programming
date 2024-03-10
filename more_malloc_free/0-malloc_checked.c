#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checks the allocated memory
 * @b: total size to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b == 0)
		return (NULL);
	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
