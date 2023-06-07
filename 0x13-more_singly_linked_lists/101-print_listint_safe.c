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
	const listint_t *slow, *fast;
	size_t no_of_nodes = 0;

	if (head == NULL)
		return (no_of_nodes);
	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);/**prints the
							    *addresses of
							    *current node
							   */
		no_of_nodes++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			no_of_nodes++;
			break;
		}
	}

	return (no_of_nodes);
}
