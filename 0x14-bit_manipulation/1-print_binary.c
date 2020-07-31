#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - function that converts decimal to binary
 * @n: is the binary number passed to the function
 * Return: The Ccnverted number or cero if fails
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		putchar ((n & 1) + '0');
	}
	else
	{
		putchar (n + '0');
	}
}
