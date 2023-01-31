#include "lists.h"


/**
 * add_nodeint - Function adds a new node at the beginning of a listint_t list.
 *
 * @head: A pointer to the address of the head of the listint_t list
 * @n: integer to be inserted
 * Return: new node or NULL otherwise.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
