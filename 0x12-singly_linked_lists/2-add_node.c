#include "lists.h"

/**
 *add_node - Function adds a new node at the beginning of a list_t list.
 *
 *@head: head pointer of list_t
 *@str: input for new node
 *Return: returns he address of the new element, or NULL otherwise.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (0);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
