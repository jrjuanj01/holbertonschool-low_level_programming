#include "lists.h"

/**
 * _strlen - Calculates the length of the string
 * @s: The stirng being measured
 * Return: int (Success)
 */
int _strlen(const char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{}
	return (l);
}

/**
 * add_node_end - a function that adds a new node at the beginning of a list
 * @head: pointer of the previous node
 * @str: string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *IDptr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	(*new).len = _strlen(str);
	(*new).next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		IDptr = *head;
		while ((*IDptr).next != NULL)
			IDptr = (*IDptr).next;
		(*IDptr).next = new;
	}
	return (new);
}
