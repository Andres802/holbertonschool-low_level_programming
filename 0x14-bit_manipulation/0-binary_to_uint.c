#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is the binary number passed to the function
 * Return: The Ccnverted number or cero if fails
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int i = 0;
	int pow = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	else
	{
	/* printf("este es el caracter: %c*/
	/*y este es el numero:%d\n", b[i], (b[i] - 48) * 1);*/
	result += (b[i] - 48) * pow;
	}
	pow *= 2;
	i--;
	}
	return (result);
}
