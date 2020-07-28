#include "lists.h"
/**
 * free_listint - it will free listint_t
 * @head: the beggining of the linked list head
 * Return: nthe address of the new node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
