#include <stdio.h>
#include "holberton.h"
/**
 *print_times_table - a function that prints the 0 to 15 times table
 *@n: is the number of times table
 *Return: n times table
 */
void print_times_table(int n)
{
	int fila;
	int columna;
	int mult;

	if (n >= 0 && n <= 15)
	{
		for (fila = 0; fila <= n; fila++)
		{
			for (columna = 0; columna <= n; columna++)
			{
				mult = fila * columna;
				if (columna == 0)
				{
					_putchar(mult + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (mult < 100)
					{
						_putchar(' ');
					}
					if (mult < 10)
					{
						_putchar(' ');
					}
					printf("%i", mult);
				}
			}
			_putchar('\n');
		}
	}
}
