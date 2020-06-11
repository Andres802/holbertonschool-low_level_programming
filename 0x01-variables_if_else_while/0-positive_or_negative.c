 /**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* if the number is greater than 0: is positive*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/* if the number is 0: is zero*/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/* if the number is less than 0: is negative*/
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
