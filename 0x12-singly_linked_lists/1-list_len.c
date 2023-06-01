#include "lists.h"
#include <stdlib.h>
/**
 * list_len - a function that produces the number of elements in a list
 * @h: list of elements
 * Return: the number of elements in the list h
 */
size_t list_len(const list_t *h)
{
	size_t no_of_nodes = 1; /*first element in the list*/

	if (h == NULL)
		return (0);

	while (h->next != NULL)/*checking if the next element is null*/
	{
		h = h->next;
		no_of_nodes++;
	}
	return (no_of_nodes);
}
