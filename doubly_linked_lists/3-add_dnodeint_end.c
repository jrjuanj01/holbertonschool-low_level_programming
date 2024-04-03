#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end of a list
 * @head: pointer of the previous node
 * @n: a number
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *IDptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	if (*head == NULL)
	{
		*head = new;
		(*new).prev = NULL;
	}
	else
	{
		IDptr = *head;
		while ((*IDptr).next != NULL)
			IDptr = (*IDptr).next;
		(*IDptr).next = new;
		(*new).prev = IDptr;
	}
	(*new).next = NULL;
	return (new);
}
