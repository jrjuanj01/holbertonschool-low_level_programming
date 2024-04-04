#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the beginning of the list
 * @index: location of the node
 * Return:1 at Success or -1 at Faliure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (index == 0)
	{
		if (*head != NULL)
		{
			temp = *head;
			*head = (**head).next;
			free(temp);
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
	}
	return (1);
}
