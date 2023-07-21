#include "lists.h"
/**
  * delete_dnodeint_at_index - a function that deletes a node at a particular
  * index
  * @head: first node
  * @index: index of node to be deleted
  * Return:1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int x = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;

		free(current);
		return (1);
	}
	while (x < index && current)
	{
		current = current->next;
		x++;
	}
	if (current == NULL)
		return (-1);
	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
