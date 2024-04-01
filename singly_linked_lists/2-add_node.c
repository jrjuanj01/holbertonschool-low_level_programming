#include "lists.h"
#include <string.h>
/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: pointer of the new node
 * @str: string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = *head;
	*head = new;
	return (*head);
}
