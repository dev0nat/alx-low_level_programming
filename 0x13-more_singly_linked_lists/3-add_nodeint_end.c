#include "lists.h"


/**
 * add_nodeint_end - Function adds a new node at the end of a listint_t list.
 *
 * @head: pointer to head of the listint_t list.
 * @n: the integer to be added
 * Return: returns nen, otherwise NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nen, *temp;

	temp = *head;
	nen = malloc(sizeof(listint_t));
	if (nen == NULL)
		return (NULL);
	nen->n = n;
	nen->next = NULL;
	if (*head == NULL)
	{
		*head = nen;
		return (nen);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = nen;
	return (nen);
}
