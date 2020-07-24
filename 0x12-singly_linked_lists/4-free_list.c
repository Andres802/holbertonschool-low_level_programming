#include "lists.h"
/**
 * free_list - will free the memory used by the structure
 *@head: heaad of my list struct
 * Return: Void 
 */ 
void free_list(list_t *head)
{
list_t *temp;

	while (head != NULL)
	{
    	temp = head ->next;
    	free(head->str);
		free(head);
		head = temp;
	}
}
