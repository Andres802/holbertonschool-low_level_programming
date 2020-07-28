#include "lists.h"
/**
 * add_nodeint_end - it will add a new node at the end of listint_t
 * @n: the int of the structure
 * @head: the beggining of the linked list head
 * Return: nthe address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;

	/*if (n == '\0')*/
		/*return(NULL);*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
		tmp->next = newNode;
		return (newNode);
}
