#include "holberton.h"
/**
 * print_square - Draws a square
 * _putchar - Prints characters one by one
 * @size: Parameter of size
 * Description: Draws a square
 * Return: 0 Value
 */
void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
