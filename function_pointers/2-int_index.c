#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @size: is the number of elements in the array
 * @array: array where the integers might be
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index of the element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (size <= 0 || array == NULL || *cmp == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		(*cmp)(array[idx]);
		if ((*cmp)(array[idx]) != 0)
			return (idx);
	}
	return (-1);
}
