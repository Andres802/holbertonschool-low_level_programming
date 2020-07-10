#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - this function that allocates memory for an array
 * using malloc
 * @nmemb: number the element of the array
 * @size: size of elements of the array
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	/** ptr to handle the size*/
	char *ptr = NULL;
	/** check if nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
	return (NULL);
	/** Sset the size of memory according to arguments*/
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);
	/** Now fill the memory with 0 */
	for (x = 0; x < nmemb * size; x++)
	{
		ptr[x] = 0;
	}
	/** casting the ptr*/
	ptr = (void *) ptr;
	return (ptr);
}
