#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_listint2 - a function that that frees a list
  * @head: the start of a linked list
  * Return: Void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp = 0;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
