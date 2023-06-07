#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * delete_nodeint_at_index - a function that deletes a node at a specified
  * index
  * @head: head of the linked list
  * @index: index of nodes in the linked list starting from 0
  * Return: 1 if success or -1 if failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *pres;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;/*storing the current head node in the temp variable*/
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	pres = *head;

	while (pres != NULL && cnt < (index - 1))
	{
		pres = pres->next;
		cnt++;
	}
	if (pres == NULL || pres->next == NULL)
		return (-1);

	temp = pres->next;
	pres->next = temp->next;
	free(temp);

	return (1);
}
