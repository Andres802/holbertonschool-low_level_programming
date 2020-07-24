#include "lists.h"
/**
 * list_len - returns the number of the elements in list_t with size counter
 * @h: pointer type list
 * Return: Size with the value of elemeents of the array
 */
size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
