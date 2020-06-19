#include "holberton.h"
/**
 * print_numbers - print the numbers
 * void: none args
 *
 */
void print_numbers(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
