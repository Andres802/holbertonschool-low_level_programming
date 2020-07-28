#include "lists.h"
/**
 * print_listint - it will print the elements of a listint_t
 * @h: the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
while (h)
	/*if (h->n == NULL)*/
		/*return (1);*/
		/*else */
	{
	printf("%d\n", h->n);
	h = h->next;
	counter++;
	}
	return (counter);
}
