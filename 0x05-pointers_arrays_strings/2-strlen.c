#include "holberton.h"
/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int andresthebest;

	for (andresthebest = 0; s[andresthebest] != '\0'; andresthebest++)
		;

	return (andresthebest);
}
