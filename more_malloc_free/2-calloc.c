#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: elements
 * @size: size of each element
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	unsigned int ttl = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(ttl);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, ttl);
	return (ptr);
}
