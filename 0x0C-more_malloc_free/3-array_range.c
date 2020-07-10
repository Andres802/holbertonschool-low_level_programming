#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - This will create an array of integers
 * @min: min number alloed in the array
 * @max: max number alloed in the array
 * Return: superptr pointer of the array
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *superptr;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	superptr = malloc(j * sizeof(int));
	if (superptr == NULL)
	return (NULL);
	for (i = 0; i < j; i++, min++)
	superptr[i] =  min;
	return (superptr);
}
