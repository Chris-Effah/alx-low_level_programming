#include "lists.h"
/**
  * free_dlistint - a function that frees space previously allocated
  * @head: head of a list
  * Return: Void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	head = NULL;
}
