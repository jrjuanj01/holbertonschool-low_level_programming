#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: elements
 * @size: size of each element
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int idx;
	unsigned int ttl;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ttl = nmemb * size;
	ptr = malloc(ttl);
	if (ptr == NULL)
		return (NULL);

	for (idx = 0; idx < ttl; idx++)
		ptr[idx] = 0;
	return (ptr);
}
