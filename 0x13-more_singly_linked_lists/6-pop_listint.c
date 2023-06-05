#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - a function that deletes head node of a linked list
 * @head: head node of the linked list
 * Return: 0 if linked list is empty or the heads note data
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	d = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (d);

}
