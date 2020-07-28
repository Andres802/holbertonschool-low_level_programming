#include "lists.h"
/**
 * get_nodeint_at_index - it will return the nth node of listint_t
 * @head: the beggining of the linked list head
 * @index: index of the node starting from cero
 * Return: if the node does not exis return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		if (i == index)
		return (tmp);
		i++;
		head = head->next;
	}
	return (NULL);
}
