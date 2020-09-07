#include "lists.h"
/**
 * insert_dnodeint_at_index -  insert a node at  a given position
 * @h: the beggining of the linked list head
 * @idx: index position
 * @n: new value to enter into de linked list
 * Return: the head with the value Null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNodito;
	dlistint_t *newnode;
if (idx == 0)
{
	return (add_dnodeint(h, n));
}
newnode = *h;
while (idx > 1)
{
	newnode = newnode->next;
	if (newnode == NULL)
		return (NULL);
	idx--;
}
if (newnode->next == NULL)
{
	return (add_dnodeint_end(h, n));
}
newNodito = malloc(sizeof(dlistint_t));
if (newNodito == NULL)
{
	return (NULL);
}
newNodito->n = n;
newNodito->prev = newnode;
newNodito->next = newnode->next;
newnode->next->prev = newNodito;
newnode->next = newNodito;
return (newNodito);
}
