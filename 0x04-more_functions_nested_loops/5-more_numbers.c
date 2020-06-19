#include "holberton.h"
/**
 * more_numbers - print the numbers from 0 to 14 ten times
 * void: none args
 *
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
