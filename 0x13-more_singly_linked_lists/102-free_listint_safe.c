#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_listint_safe - a function that frees a linked list
  * @h: linked list
  * Return: the sixe of the list that was freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t x = 0;
/*checks if head node is null*/
	if (*h == NULL)
		return (x);

	while (*h != NULL)/*traversing the list*/
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		x++;

		if (temp <= *h)
		{
			*h = NULL;
			break;
		}
	}
	return (x);

}
