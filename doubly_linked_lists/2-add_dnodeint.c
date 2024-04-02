#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning of a list
 * @head: pointer of the new node
 * @n: string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	(*new).next = *head;
	(*new).prev = NULL;
	*head = new;
	return (*head);
}
