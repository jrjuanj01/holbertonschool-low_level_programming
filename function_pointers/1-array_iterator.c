#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes functions given as each element of an array
 * @array: the array the functions are located in
 * @size: the size of the array
 * @action: the function about to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	for (idx = 0; idx < size; idx++)
		(action)(array[idx]);
}
