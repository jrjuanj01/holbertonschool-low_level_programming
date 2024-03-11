#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - contain all the values from min (included) to max (included)
 * @min: minumum index value included
 * @max: maximum index value included
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int ttl;
	int idx;

	if (min > max)
		return (NULL);
	ttl = max - min;
	ptr = malloc(ttl * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (idx = 0 ; min < max; idx++, min++)
		ptr[idx] = min;
	if (min == max)
		putchar('\0');
	return (ptr);
}
