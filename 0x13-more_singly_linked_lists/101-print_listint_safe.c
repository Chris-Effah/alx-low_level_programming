#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_listint_safe - a function that prints out the elements of a linked
  *list
  *@head: head node of the linked list
  *Return: number of nodes in the linked lists
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t no_of_nodes = 0;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);/**prints the
							    *addresses of
							    *current node
							   */
		no_of_nodes++;

		if (temp >= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			printf("-> [%p] %d\n", (void *)temp->next->next, temp->next->next
				->n);
			exit(98);
		}
		temp = temp->next;/*moving to the next node*/
	}

	return (no_of_nodes);
}
