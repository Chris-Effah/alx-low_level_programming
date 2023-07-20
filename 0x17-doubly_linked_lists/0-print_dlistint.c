#include "lists.h"
/**
  * print_dlistint - a function that prints elements in a lisst
  * @h: head of the linked list
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_nodes++;
	}
	return (no_of_nodes);
}
