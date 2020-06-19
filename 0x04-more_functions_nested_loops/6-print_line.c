#include "holberton.h"
/**
 * print_line - Draws a straight line in the terminal
 * _putchar - Prints characters one by one
 * @n: Parameter of times
 *
 * Description: Draws a straight
 * Return: 0 Value
 */
void print_line(int n)
{
	char i = '_';
	int j = n;

	for (j = 0; j <= n; j++)
	{
		if (j != 0)
			_putchar(i);
	}
	_putchar('\n');
}
