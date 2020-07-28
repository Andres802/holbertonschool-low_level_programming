#include "lists.h"
/**
 * insert_nodeint_at_index - this fuction will add a function at given position
 * @head: the beggining of the linked list head
 * @idx:
 * @n:
 * Return: the head with the value Null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL;
	listint_t *newNodito = *head;
	unsigned int size;
	unsigned int index = 0;

	if (!*head || head == NULL) 
	{
        return (NULL);
    }
	size = listint_len2((*head));
    newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (idx > size)
		return (NULL);
	if (idx == 0)
	newNode->next = *head;
	newNode->n = n;
	*head = newNode;
		return (newNode);
	while (index < (idx -1))
	{
		index++;
		newNodito = newNodito->next;
	}
	newNode->n = n;
	newNode->next = newNodito->next;
	newNodito->next = newNode;
	return (newNode);
}
/**
 * listint_len2 - return the lenght of a list
 * @h: list
 *
 * Return: number of elements in the list
 */
unsigned int listint_len2(listint_t *h)
{
	unsigned int i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}