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
	dlistint_t *current, *temp;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	temp = *head;
	while (temp != NULL && x < (index - 1))
	{
		temp = temp->next;
		x++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);

	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
