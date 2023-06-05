#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *get_nodeint_at_index -  a function that returns the nth node of a listint_t
  *linked list.
  *@head: beginning of the linked list
  *@index: index of the node
  *Return: node being searched for
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	if (node == NULL)
		return (NULL);

	while (index > 0 && node != NULL)
	{
		node =  node->next;
		index--;
	}
	return (node);
}
