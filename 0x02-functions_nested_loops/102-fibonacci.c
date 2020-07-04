

#include <stdio.h>
/**
 * main - a function that prints fib numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int  anterior = 1;
	long int  actual = 2;
	int  i;

	printf("%ld ,", anterior);
	for (i = 2; i <= 50; i++)
	{
		printf("%ld", actual);
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
