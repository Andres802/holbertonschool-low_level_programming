#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	if (size == 0)
	return (0);

	ptr = malloc(size * (sizeof(char)));
	if (ptr == '\0')
	{
		return (0);
	}

	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
		return (ptr);
	}
}
