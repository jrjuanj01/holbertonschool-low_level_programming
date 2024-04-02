#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list
 * @h: pointter to the head of the list to be printed
 * Return: size_t number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++, h = (*h).next)
	{
		if ((*h).n != '\0')
			printf("%d\n", (*h).n);
	}
	return (nodes);
}
