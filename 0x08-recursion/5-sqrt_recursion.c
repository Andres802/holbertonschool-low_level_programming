#include "holberton.h"
#include <stdio.h>
/**
 * mysqrt- function, returns tthe natural square root of a number.
 * @b: integer
 * @a: integer
 * Return: negative if a is less than b or a if a == b
 */
int mysqrt(int b, int a)
{
	if (a * a == b)
	return (a);
	if (a * a > b)
	return (-1);
	else
	{
		return (mysqrt(b, a + 1));
	}
}
/**
 * _sqrt_recursion - function, returns tthe natural square root of a number.
 * @n: integer
 * Return: if n es lower than 0, return -1 as error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	else
	return (mysqrt(n, 1));
}


