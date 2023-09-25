#include "lists.h"

/**
 ** delete_nodeint_at_index - Deletes a node at a given index in a listint_t linked list.
 ** @head: A pointer to a pointer to the first node in the list.
 ** @index: The index of the node to delete.
 **
 ** Return: 1 if successful, -1 if it fails.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *node_to_delete;

	if (!*head)
	return (-1);

	if (index == 0)
{
	*head = (*head)->next;
	free(current);
	return (1);
}

	while (current)
{
	if (i == index - 1)
{
	node_to_delete = current->next;
	current->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
	current = current->next;
	i++;
}

	return (-1);
}
