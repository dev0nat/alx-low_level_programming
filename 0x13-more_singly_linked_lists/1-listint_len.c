#include "lists.h"

/**
 * listint_len - Function returns the number of elements in a list
 *
 * @h: head of a listint_t
 * Return: returns numbers of nodes/ct.
 */
size_t listint_len(const listint_t *h)
{
	size_t ct = 0;

	while (h)
	{
		h = h->next;
		ct++;
	}
	return (ct);
}
