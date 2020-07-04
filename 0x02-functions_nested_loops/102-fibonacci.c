

#include <stdio.h>
/**
* main - a function that prints first 50 fibinacci numbers
*
*Return : Always 0
*/
int main(void)
{
	long  anterior = 1;
	long   actual = 2;
	int  i;

	printf("%i ,", anterior);
	for (i = 2; i <= 50; i++)
	{
		printf("%i", actual);
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
