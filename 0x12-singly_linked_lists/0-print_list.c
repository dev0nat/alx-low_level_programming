#include "lists.h"

/**
 * print_list - Function prints all the elements of the instance list_t
 *
 * @h: The list_t list
 * Return: returns number of nodes in h /ct.
 */
size_t print_list(const list_t *h)
{
	int ct = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		ct++;
		h = h->next;
	}
	return (ct);
}
