#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Returns a pointer to a newly allocated space using malloc
* @str: Firts input int argument "Holberton"
* Description: Returns a pointer to a newly allocated space
* in memory, ofthe string given as a parameter.
* Return: null or a pointer
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int recorrido = 0;
	unsigned int len;

	if (str == '\0')
	return (0);
	len = _strlen(str);
	p = malloc(len + 1 * (sizeof(char)));
	if (p == '\0')
	return (0);
	for (; recorrido < len; recorrido++)
	p[recorrido] = str[recorrido];
	p[recorrido] = str[recorrido];
	return (p);
}
/**
* _strlen - Returns a pointer to a newly allocated space using malloc
* @s: Input int argument "Holberton"
* Return: null or a pointer
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	for (length = 0; length < *s; length++)
	s++;
	return (length);
}
