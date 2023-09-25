#include "lists.h"

/**
 ** pop_listint - remove and returnes the head node's data
 ** @head: My structures
 ** Return: Return to head node's data(n)
 **/

int pop_listint(listint_t **head)
{
	listint_t *phead;
	int result;

	if (*head == NULL)
	return (0);
	result = (*head)->n;
	phead = *head;
	*head = (*head)->next;
	free(phead);
	return (result);
}
