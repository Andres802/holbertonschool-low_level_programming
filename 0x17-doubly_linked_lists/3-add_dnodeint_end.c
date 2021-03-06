#include "lists.h"
/**
 *add_dnodeint_end - add the nodes in a linked list at the end
 *@head: head of thde list
 *@n:data number int
 * Return: The number of nodes in counter
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
		temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		return (new_node);
}
