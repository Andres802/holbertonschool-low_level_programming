#include "holberton.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: single letter input
 * Return: 1 if int c is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
