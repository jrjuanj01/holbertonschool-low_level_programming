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
	int *ptr = 0;
	
	if (nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
