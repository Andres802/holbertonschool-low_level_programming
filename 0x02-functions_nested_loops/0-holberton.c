#include <stdio.h>
#include "holberton.h"
/**
 * main - last digit
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
