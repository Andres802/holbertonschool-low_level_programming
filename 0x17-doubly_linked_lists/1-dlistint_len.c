#include "lists.h"
/**
 *dlistint_len - Print all elemnts of the linked list
 *@h: Double linked lists
 * Return: The number of nodes in counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t  counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
