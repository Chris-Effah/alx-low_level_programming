#include "lists.h"
/**
  *get_dnodeint_at_index - a function that obtains a node at a particular index
  *@head: head of the list
  *@index: position of each node
  *Return: node obtained
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	if (node == NULL)
		return (NULL);

	while (index > 0 && node != NULL)
	{
		node = node->next;
		index--;
	}
	return (node);
}

