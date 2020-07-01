#include "holberton.h"
/**
 * _strlen_recursion -  function that prints  the lenght of a string
 * @s: string  to pointer
 * Return: anything
 */
int _strlen_recursion(char *s)
{
	int z;

	z = 0;

	if (s[z])
	{
		return (1 + _strlen_recursion(&s[z + 1]));

	}
	return (z);
}
