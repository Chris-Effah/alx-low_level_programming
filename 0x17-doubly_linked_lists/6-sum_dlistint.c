#include "lists.h"
/**
  * sum_dlistint - a function that finds the sum of all data in a list
  * @head: first node of a list
  * Return: sum of data in a list
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
