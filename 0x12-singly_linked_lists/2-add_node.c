#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function that adds a new node at the beginning of list
 * @head: a pointer / address to the beginning of the list
 * @str: string in the list and to be printed
 * Return: address of the new element to be added or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node = 0;

	if (str == NULL)
		return (NULL);

	n_node = malloc(sizeof(list_t)); /* allocating space for new node*/

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = strlen(str);
	n_node->next = *head;
		*head = n_node;

	return (n_node);
}
