#include "lists.h"

/**
 * pop_listint - Function deletes the head node of a listint_t linked list.
 *
 * @head: head of list.
 * Return:  returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	val = temp->n;
	*head = (*head)->next;

	free(temp);

	return (val);
}
