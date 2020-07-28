#include "lists.h"
/**
 * sum_listint - it will summ the elemnets of the listint_t
 * @head: the beggining of the linked list head
 * Return: Return sUM
 */
int sum_listint(listint_t *head)
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
