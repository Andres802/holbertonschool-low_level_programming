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

	return (primefactor(n, n - 1));
}

int primefactor(int b, int a)
{
	if (a == 1 )
	return (a);
	if (b % a == 0)
	 return (0);
	 else
	 
		 return (primefactor(b, a - 1));

	 
	 
}