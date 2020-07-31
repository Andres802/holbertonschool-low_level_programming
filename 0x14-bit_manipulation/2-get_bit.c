#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: variable
 * @index: variable
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}