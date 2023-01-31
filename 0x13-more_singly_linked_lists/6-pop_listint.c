#include "lists.h"

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
