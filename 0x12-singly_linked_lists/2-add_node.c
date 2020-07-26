#include "lists.h"
/**
 * *add_node - add a node to the beginning of the list_t
 * @head: pointer to the beginning of the node
 * @str: strin gto copy
 * Return: pointer to the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
	return (NULL);
	/*allocate memory for the new node*/
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	return (NULL);
	 /* lets copy the string*/
	 newNode->str = strdup(str);
	 newNode->len = _strlen(str);
	 newNode->next = *head;
	 *head = newNode;
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
