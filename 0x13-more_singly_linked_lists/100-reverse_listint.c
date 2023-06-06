#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * reverse_listint -  a function that reverses a linked list
  * @head: start of the linked list
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp1 = NULL;

	if (*head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		temp = (*head)->next;
		(*head)->next = temp1;
		temp1 = (*head);
		(*head) = temp;
	}
	(*head) = temp1;
	return (*head);
}
