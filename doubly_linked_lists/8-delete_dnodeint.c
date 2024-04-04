#include "lists.h"
/**
 * dlistint_len - a function that counts all the elements of a list
 * @h: pointer to the head of the list to be counted
 * Return: size_t number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++, h = (*h).next)
	{}
	return (nodes);
}

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the beginning of the list
 * @index: location of the node
 * Return:1 at Success or -1 at Faliure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	size_t len;

	len = dlistint_len(*head);
	if (index > len)
		return (-1);

	if (index == 0)
	{
		if (*head != NULL)
		{
			temp = *head;
			*head = (**head).next;
			(**head).prev = NULL;
			free(temp);
			return (1);
		}
		return (-1);
	}
	else
	{
		for (temp = *head; index != 0; index--, temp = (*temp).next);

		if (temp == NULL)
			return (-1);

		(*(*temp).next).prev = (*temp).prev;
		(*(*temp).prev).next = (*temp).next;
		free(temp);
		return (1);
	}
	return (1);
}
