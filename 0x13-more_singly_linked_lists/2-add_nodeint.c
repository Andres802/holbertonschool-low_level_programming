#include "lists.h"
/**
 * add_nodeint - it will add a new node at the beginning of listint_t
 * @n: the int of the structure
 * @head: the beggining of the linked list head
 * Return: nthe address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	/*if (n == NULL)*/
	/*return (NULL);*/

newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	return (NULL);
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
