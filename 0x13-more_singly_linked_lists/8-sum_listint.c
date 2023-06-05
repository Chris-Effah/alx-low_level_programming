#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * sum_listint - sums up all the elements in a linked list
  * @head: start of a list
  * Return: the sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
