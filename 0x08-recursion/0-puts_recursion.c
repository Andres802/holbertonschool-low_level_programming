#include "holberton.h"
/**
 * _puts_recursion -  function, prints a string from a &s each time
 * @s: pointer to the string
 * Return: anything
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(&s[i]);
	}
	else
	{
		_putchar('\n');
	}
}
