#include "lists.h"

/**
 * list_len - a function that counts all the elements of a list
 * @h: pointer to the head of the list to be counted
 * Return: size_t number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++, h = (*h).next)
	{}
	return (nodes);
}
