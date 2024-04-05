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

	if (head == NULL)
		return (-1);
	if (index < 1)
	{
		temp = *head;
		if (temp->next != NULL)
		{
			*head = temp->next;
			(*head)->prev = NULL;
			free(temp);
			return (1);
		}
		free(temp);
		*head = NULL;
		return (1);
	}
	for (temp = *head; index > 0; index--, temp = (*temp).next)
	{
		if (temp == NULL)
			return (-1);
	}
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
