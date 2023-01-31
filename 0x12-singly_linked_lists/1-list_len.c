#include "lists.h"

/**
 * list_len - Function outputs the number of elements in a linked list_t list.
 *
 * @h: list_t pointer instance
 *
 * Return: returns the number of elements in a list /ct
 */
size_t list_len(const list_t *h)
{
	int ct = 0;

	while (h)
	{
		ct++;
		h = h->next;
	}
	return (ct);
}
