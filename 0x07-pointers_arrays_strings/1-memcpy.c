#include "holberton.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: my destiny pointer.
 * @src: my source pointer.
 * @n: my n bytes to be copy.
 * Return: the pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
