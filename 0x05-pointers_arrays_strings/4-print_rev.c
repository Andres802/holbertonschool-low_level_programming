#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int andresthebest;

	for (andresthebest = 0; s[andresthebest] != '\0'; andresthebest++)
		;

	for (andresthebest--; andresthebest >= 0; andresthebest--)

		_putchar(s[andresthebest]);

	_putchar('\n');
}
