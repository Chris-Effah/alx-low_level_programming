#include "lists.h"
/**
  * insert_dnodeint_at_index - a function that inserts a node at a particular
  * index
  * @h: first node
  * @idx: index of the node
  * @n: data of the node
  * Return: address to the inserted node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int x;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}


	for (x = 0; x < (idx - 1) && temp; x++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	new_node->next = temp->next;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
