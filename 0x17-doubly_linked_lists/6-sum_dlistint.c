#include "lists.h"
/**
 * sum_dlistint - it will summ the elemnets of the listint_t
 * @head: the beggining of the linked list head
 * Return: Return sUM
 */
int sum_dlistint(dlistint_t *head)
{
		int sum = 0;

if (!head)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
