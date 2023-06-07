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
	listint_t *next, *temp = *head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
