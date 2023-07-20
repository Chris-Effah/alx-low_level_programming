#include "lists.h"
/**
  * dlistint_len - a function that gives the length of the list
  * @h: head of the linked list
  * Return: length of the list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_nodes = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		no_of_nodes++;
	}
	return (no_of_nodes);
}
