#include "lists.h"

/**
  * dlistint_len - Function returns the number of elements in a linked list.
  *
  * @h: The head of the dlistint_t list.
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
