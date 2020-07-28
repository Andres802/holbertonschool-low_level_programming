#include "lists.h"
/**
 * free_listint2 - it will free listint_t
 * @head: the beggining of the linked list head
 * Return: the head with the value Null
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head && *head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		*head = NULL;
	}
}
