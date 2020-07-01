#include "holberton.h"
/**
 * _print_rev_recursion -  function that prints a string in reverse
 * @s: string pointer
 * Return: anything
 */
void _print_rev_recursion(char *s)
{
	int x;

	x = 0;

	if (s[x])
	{
		_print_rev_recursion(&s[x + 1]);
		_putchar (s[x]);
	}
}
