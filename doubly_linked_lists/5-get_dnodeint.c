#include "lists.h"

/**
 * get_dnodeint_at_index - finds the index node
 * @index: position of the node
 * Return: Pointer to node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int apr, nodes;
	dlistint_t *temp = head;

	for (nodes = 0; temp != NULL; nodes++, temp = (*temp).next)
	{}
	if (index > nodes)
		return (NULL);
	else
	{
		temp = head;
		for (apr = 0; apr < index; apr++)
			temp = (*temp).next;
	}
	return (temp);
}
