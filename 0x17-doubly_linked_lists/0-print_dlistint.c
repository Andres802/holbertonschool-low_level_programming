#include "lists.h"
/**
 *print_dlistint - Print all elemnts of the linked list
 *@h: Double linked lists
 * Return: The number of nodes in counter
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t  counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
			/** move to next node */
			h = h->next;
		/** store the number of nodes in counter  */
		counter++;
	}
	return (counter);
}
