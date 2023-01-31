#include "lists.h"

/**
 * sum_listint - Function computes the sum of all the data from listint_t
 *
 * @head: head of linked list.
 * Return: returns sum of the list or 0 otherwise.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
