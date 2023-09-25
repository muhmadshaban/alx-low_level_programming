#include "lists.h"
/**
 ** listint_len - function return to the number of nudes
 ** @h: my structure entry
 ** Return: return the number to the nodes
 **
 **/
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
{
	count += 1;
	h = h->next;
}
	return (count);
}
