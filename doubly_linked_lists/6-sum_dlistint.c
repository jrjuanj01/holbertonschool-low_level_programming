#include "lists.h"
/**
 * sum_dlistint -  a function that returns the sum of all the data (n) of a doubly linked list
 * @head: pointer to the head node of the list
 * Return:the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int nodes, total = 0;
	dlistint_t *temp = head;

	for (nodes = 0; temp != NULL; nodes++, temp = (*temp).next)
	{
		total += (*temp).n;
	}
	return (total);
}
