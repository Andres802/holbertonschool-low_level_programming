#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: this is a size
 * Return: void
 */

void print_triangle(int size)
{
	int j;
	int i;
	int x = size;

	if (size > 0)
		for (j = 0; j < size; j++)
		{
			x--;
			for (i = 0; i < size; i++)
			{

				if (i < x)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');

		}
	else
		_putchar('\n');

}
