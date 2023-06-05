#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *add_nodeint_end - a function that adds a new node at the end of a linked
  *list
  * @head: start of a linked list h
  * @n: element in a list
  * Return: the address of the new element, or NULL if it failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = 0;
	listint_t *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;


	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n_node;
	return (n_node);
}
