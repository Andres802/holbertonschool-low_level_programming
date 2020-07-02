#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - function, returns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: if n es lower than 0, return -1 as error
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	}
	else if (y < 0)
	{
	return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
