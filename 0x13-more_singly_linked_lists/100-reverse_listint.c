#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: head of the linked list
 * Return: returns pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	if (head == NULL || *head == NULL)
		return (NULL);

	p = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;

	return (*head);
}
