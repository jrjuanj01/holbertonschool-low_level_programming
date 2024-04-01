#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list
 * @h: pointter to the head of the list to be printed
 * Return: size_t number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++, h = (*h).next)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
	}
	return (nodes);
}
