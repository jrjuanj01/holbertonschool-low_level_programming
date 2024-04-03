#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: valu that will be given tp the new node
 * Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int apr, nodes;
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*h == NULL)
	{
		(*new).next = NULL;
		(*new).prev = NULL;
		(*new).n = n;
		*h = new;
		return (*h);
	}

	for (nodes = 0; (*temp).next != NULL; nodes++, temp = (*temp).next);
	if (idx > nodes)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == nodes)
		return (add_dnodeint_end(h, n));

	for (apr = 0; apr <= idx; apr++)
		temp = (*temp).next;

	if (temp != NULL)
	{
		(*new).n = n;
		(*new).prev = temp;
		(*new).next = (*temp).next;
		(*temp).next = new;
		(*(*new).next).prev = new;
	}
	return (new);
}
