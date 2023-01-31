#include "lists.h"

/**
 * free_listint2 - Function frees a listint_t linked list
 *
 * @head: head of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}
}
