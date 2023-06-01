#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list -  a function that prints all the elements of the list
 * @h: list of elements to be printed
 * Return: number of modes in the list
 */
size_t print_list(const list_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		no_of_nodes++;
	}
	return (no_of_nodes);
}

