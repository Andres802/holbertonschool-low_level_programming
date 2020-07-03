#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number- function returns if is prime or not.
 * @n: integer
 * Return: reutns 1 if the input integer is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else

	return (_prime(n, n - 1));
}

/**
 * _prime - function that checks if is prime or not.
 * @a: integer
 * @b: integer
 * Return: returns 1 if integer otherwise return 0
 */

int _prime(int b, int a)
{
	if (a == 1)
	return (a);
	if (b % a == 0)
	return (0);
	else
	return (_prime(b, a - 1));
}
