#include "lists.h"
/**
 *free_dlistint - add the nodes in a linked list at the end
 *@head: head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}