#include "lists.h"
/**
 * listint_len - it will print the number of elements of a listint_t
 * @h: the node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
	h = h->next;
	counter++;
	}
	return (counter);
}
