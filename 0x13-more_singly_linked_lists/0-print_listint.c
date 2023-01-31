#include "lists.h"

/**
 * print_listint - Function prints integer elements in listint_t
 *
 * @h: listint_t instance to be printed
 * Return: ct
 */
size_t print_listint(const listint_t *h)
{
	size_t ct = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ct++;
	}
	return (ct);
}
