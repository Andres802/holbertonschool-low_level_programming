#include "lists.h"
/**
 * insert_nodeint_at_index - this fuction will add a function at given position
 * @head: the beggining of the linked list head
 * @idx: index position
 * @n: new value to enter into de linked list
 * Return: the head with the value Null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNodito;
	listint_t *newnode;
	unsigned int size;

	size = 0;
	/* allocate memory for the newnode */
	newnode = malloc(sizeof(listint_t));
	/* task condition */
	if (newnode == NULL)
		return (NULL);
	/* n keeps being the data of the new node */
	newnode->n = n;
	/*  given the case, if index is cero then newnode is equal to head */
	/* and return newnode in head of the list */
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newNodito = *head;
	/* if index is different to the position */
	/* counter size keeps running and headaux moves to the next node */
	while (newNodito != NULL && size != idx - 1)
	{
		size++;
		newNodito = newNodito->next;
	}
	/* if index and size are equal and non NULL */
	if (size == idx - 1 && newNodito!= NULL)
	{
		newnode->next = newNodito->next;
		newNodito->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
