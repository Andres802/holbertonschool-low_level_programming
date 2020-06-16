#include "holberton.h"
/**
 * _isalpha - is a function that checks for lower character
 *@c: single letetr input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
