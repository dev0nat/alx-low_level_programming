#include "lists.h"

/**
  * free_listint - Function frees a listint_t list.
  *
  * @head: head of listint_t
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
