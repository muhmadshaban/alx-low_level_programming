#include "lists.h"

/**
 ** add_nodeint_end - Push a new node in the end of the node
 ** @head:c My struct
 ** @n: The int take in my linked list.
 ** Return: the address of the new element.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
{
	free(new_node);
	return (new_node);
}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
{
	*head = new_node;
	return (*head);
}
	while (end->next != NULL)
	end = end->next;
	end->next = new_node;
	return (*head);
}
