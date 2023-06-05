#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_listint - a function that prints all the elements of list h
  * @h: list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		no_of_nodes++;
		h = h->next;
	}
	return (no_of_nodes);
}
