#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_listint - a function that frees space previously allocated
  * @head: start of the list
  * Return: Void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
