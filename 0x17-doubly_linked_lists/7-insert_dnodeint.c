#include "lists.h"
/**
 * insert_dnodeint_at_index -  add a node at  a given position
 * @h: the beggining of the linked list head
 * @idx: index position
 * @n: new value to enter into de linked list
 * Return: the head with the value Null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNodito;
	dlistint_t *newnode;
	unsigned int size;

	size = 0;
	/* allocate memory for the newnode */
	newnode = malloc(sizeof(dlistint_t));
	/* task condition */
	if (newnode == NULL)
		return (NULL);
	/* n keeps being the data of the new node */
	newnode->n = n;
	/*  given the case, if index is cero then newnode is equal to head */
	/* and return newnode in head of the list */
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	newNodito = *h;
	/* if index is different to the position */
	/* counter size keeps running and headaux moves to the next node */
	while (newNodito != NULL && size != idx - 1)
	{
		size++;
		newNodito = newNodito->next;
	}
	/* if index and size are equal and non NULL */
	if (size == idx - 1 && newNodito != NULL)
	{
		newnode->next = newNodito->next;
		newNodito->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
