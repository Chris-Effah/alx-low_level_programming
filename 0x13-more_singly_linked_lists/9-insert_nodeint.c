#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * insert_nodeint_at_index - a function that inserts a new node at a given
  * position.
  * @head: start of the linked list
  * @idx: index of the node
  * @n: data of node
  * Return: address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *temp = *head;
	unsigned int x;

	if (*head == NULL)
		return (NULL);

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);
	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = temp;
		*head = n_node;
		return (n_node);
	}
	temp = *head;

	for (x = 0; x < idx - 1; x++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(n_node);
			return (NULL);
		}
		temp = temp->next;
	}

	n_node->next = temp->next;
	temp->next = n_node;

	return (n_node);
}
