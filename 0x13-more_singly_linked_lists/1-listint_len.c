#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * listint_len - a function that returns the number of elements in a linked
  * list h
  * @h: linked list
  * Return: number of nodes in the list.
  */
size_t listint_len(const listint_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		no_of_nodes++;
		h = h->next;
	}
	return (no_of_nodes);
}
