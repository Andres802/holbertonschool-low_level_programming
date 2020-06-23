#include "holberton.h"

/**
 * _puts - print a  string
 * @str: string type to a pointer
 * Return: length of string
 */
void _puts(char *str)
{
	int andresthebest;

	for (andresthebest = 0; str[andresthebest] != '\0'; andresthebest++)
	{
		_putchar(str[andresthebest]);
	}
	_putchar('\n');
}
