#include "holberton.h"
/**
 * print_numbers - Prints the numbers from 0 to 9
 * _putchar - Print characters one by one
 * @void: Description of a empty parameter
 * Description: This prints the numbers from 0 to 9
 * Return: 0 Value if it works
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
