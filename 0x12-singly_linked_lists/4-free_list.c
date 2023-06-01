#include "lists.h"
#include <stdlib.h>
/**
  * free_list - a function that frees space allocate previously
  * @head: first element of the list h
  * Return: Void
  */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}

}
