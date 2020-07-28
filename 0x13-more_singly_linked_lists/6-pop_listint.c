#include "lists.h"
/**
 * pop_listint - it will delete the head node of  listint_t
 * @head: the beggining of the linked list head
 * Return: if is empty return 0 or head data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

if (!*head)
	return (0);
n = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (n);
}
