#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the pointer to the beginning of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = (*head).next;
		free(ptr);
	}
	free(head);
}
