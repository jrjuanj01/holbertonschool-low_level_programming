#include "lists.h"

/**
 * free_list - frees a list
 * @head: the pointer to the beginning of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = (*head).next;
		free((*ptr).str);
		free(ptr);
	}
	free(head);
}
