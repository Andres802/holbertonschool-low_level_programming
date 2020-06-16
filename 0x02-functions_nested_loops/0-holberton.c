#include <stdio.h>
#include "holberton.h"
/**
 * main - program that print Holberton, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *a = "Holberton";

	while (*a)
	{
		_putchar(*a);
		a++;
	}
	_putchar('\n');

	return (0);
}
