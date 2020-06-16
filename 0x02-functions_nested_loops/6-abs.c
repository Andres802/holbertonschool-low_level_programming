#include "holberton.h"
/**
 *_abs  - Function that computes the absolute of an integer
 *@ab:integer input
 * Return: absolute value of ab (Success)
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
