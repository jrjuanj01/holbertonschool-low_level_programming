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

	for (nodes = 0; (*temp).next != NULL; nodes++, temp = (*temp).next)
	{}
	if (idx > nodes)
		return (NULL);

	temp = *h;

	for (apr = 0; apr < idx - 1; apr++)
		temp = (*temp).next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).prev = temp;
	(*new).next = (*temp).next;
	(*temp).next = new;
	(*(*new).next).prev = new;

	return (new);
}
