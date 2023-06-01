#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node to the end of the list
 * @head: pointer / address of the node at the beggining of the list
 * @str: string in the list
 * Return: address of new element and null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = strlen(str);
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
