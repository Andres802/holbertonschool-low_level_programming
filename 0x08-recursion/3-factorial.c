#include "holberton.h"
/**
 * factorial -   function that returns the factorial of a given number.
 * @n: integer to find the factorial
 * Return: if n es lower than 0, return -1 as error
 */
int factorial(int n)
{
	if (n == 1)
	return (1);
	if (n < 0)
	return (-1);
	else
	return (n * factorial(n - 1));
}
