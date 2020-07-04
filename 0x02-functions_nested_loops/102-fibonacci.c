

#include <stdio.h>
/**
 * fib - a function that prints fib numbers
 *
 * Return: x10 a-z
 */
int fib(void)
{
	long  anterior = 1;
	long   actual = 2;
	int  i;

	printf("%lu ,", anterior);
	for (i = 2; i <= 50; i++)
	{
		printf("%lu", actual);
		if (i != 50)
		{
			printf(", ");
		}
		actual = actual + anterior;
		anterior = actual - anterior;
	}
	printf("\n");
	return (0);
}
