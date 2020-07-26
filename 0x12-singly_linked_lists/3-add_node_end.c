#include "lists.h"
/**
 * add_node_end - add a node at the en of the single linked list
 * @head: pointer to he head of the list_t
 * @str: pointer to the string and valu in the structure
 * Return: pointer to the last noce before NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last = *head;

	if (str == NULL)
	return (NULL);
	newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;
	{
		if (*head == NULL)
		*head = newNode;
		return (newNode);
	}
	while (last->next != NULL)
		last = last->next;
		last->next = newNode;
		return (newNode);
}
/**
 * _strlen - swap a value
 * @s: pointer parameter
 * Return: Always 0 (Success)
 */
int _strlen(const char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

