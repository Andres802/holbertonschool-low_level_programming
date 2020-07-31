#include <stdio.h>
#include "holberton.h"
/**
 *flip_bits - function that returns number of bits to flip from
 *one number to the other one
 *@n: Variable n
 *@m: the next position
 *Return: An integer of number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j;
	unsigned long int y = 0;

	j = n ^ m;

	while (j > 0)
	{
		if ((j & 1) != 0)
			y++;

		j = j >> 1;
	}
	return (y);
}
