#include "lists.h"
/**
  *find_listint_loop - a function that finds a loop in a linked list
  *@head: head node of the linked list
  *Return: address of the list where the loop starts or null if failure
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr = head;
	listint_t *temp;

	while (curr != NULL)
	{
		if (curr->next >= curr)
		{
			return (curr->next);
		}

		temp = curr->next;
		curr->next = curr;
		curr = temp;
	}
	return (NULL);
}
