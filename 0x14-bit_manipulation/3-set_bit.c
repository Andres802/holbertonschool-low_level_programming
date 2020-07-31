#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: variable
 * @index: variable
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
