#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates height amount of arrays of size width
 * @height: amount of arrays
 * @width:amount of chars in each array
 * Return: Pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int idx;
	int arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (arr = 0; arr < height; arr++)
	{
		ptr[arr] = malloc(width * sizeof(int));
		if (ptr[arr] == NULL)
		{
			for (idx = arr - 1; idx >= 0; idx--)
				free(ptr[idx]);
			free(ptr);
			return (NULL);
		}
	}

	for (arr = 0; arr < height; arr++)
	{
		for (idx = 0; idx < width; idx++)
			ptr[arr][idx] = 0;
	}
	return (ptr);
}
