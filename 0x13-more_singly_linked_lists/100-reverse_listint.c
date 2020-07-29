#include "lists.h"
/**
 * delete_nodeint_at_index - this fuction will
 * delete a node at any given position
 * @head: the beggining of the linked list head
 * Return: return a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *before;
if (head == NULL)
{
	return (NULL);
}
while (*head != NULL)
{
	next = (*head)->next;
	(*head)->next = before;
	before = (*head);
	(*head) = next;
}
	(*head) = before;
	return (*head);
}