#include "lists.h"

/**
 ** sum_listint - Sum  all head->n of this more linked single list
 ** @head: This is my more linked list
 ** Return: Return total of the sum
 **/
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