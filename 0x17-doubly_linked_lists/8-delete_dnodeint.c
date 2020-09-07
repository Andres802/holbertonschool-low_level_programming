#include "lists.h"
/**
 * delete_dnodeint_at_index - this fuction will
 * delete a node at any given position
 * @head: the beggining of the linked list head
 * @index: index position of te node to delete
 * Return: 1 if it succeed or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *lastnode = *head;

	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (lastnode == NULL)
			return (-1);
		lastnode = lastnode->next;
		index--;
	}
	if (lastnode == *head)
	{
		*head = lastnode->next;
		(*head)->prev = NULL;
	}
	else
	{
		lastnode->prev->next = lastnode->next;
		if (lastnode->next)
			lastnode->next->prev = lastnode->prev;
	}
	free(lastnode);
	return (1);
}
