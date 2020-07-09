#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked- Write a function
 * that allocates memory using malloc function
 * @b: unsigned int parameter
 * Return: newptr
 * /
 */
void *malloc_checked(unsigned int b)
{
	/** declare my pointer to reserve int to the size of my argument*/
	void *newptr = NULL;

	newptr = malloc(b);
	/** Next I do check if new pointer fails*/
	if (newptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (newptr);
	}
}
