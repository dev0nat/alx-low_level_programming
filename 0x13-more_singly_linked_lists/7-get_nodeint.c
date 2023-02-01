#include "lists.h"

/**
 * get_nodeint_at_index - Function returns the nth node of a listint_t.
 *
 * @head: listint_t head pointer
 * @index: index of node
 * Return: returns temp, or NULL otherwise.
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);

	return (temp);
}
