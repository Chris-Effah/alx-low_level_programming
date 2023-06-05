#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * add_nodeint - a function that adds a new node at the beginning of a linked
  * list
  * @head: a pointer to the head of a linked list
  * @n: element of the list h.
  * Return: address of the new node added or null if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
