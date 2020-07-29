#include "lists.h"
/**
 * delete_nodeint_at_index - this fuction will
 * delete a node at any given position
 * @head: the beggining of the linked list head
 * @index: index position of te node to delete
 * Return: 1 if it succeed or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodedelete;
	unsigned int j;

	j = 0;

	while (*head)
	{
		if (j == index)
		{
			nodedelete = (*head);
			*head = (*head)->next;
			free(nodedelete);
			return (1);
		}
		head = &(*head)->next;
		j++;
	}
	return (-1);
}
