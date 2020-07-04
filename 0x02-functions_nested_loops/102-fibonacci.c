#include <stdio.h>

int main(void)
{
	long long anterior = 1;
	long long  actual = 2;
	int  i;

	printf("%lld ,", anterior );
	for (i = 2; i < 50; i ++)
	{
		printf("%lld", actual );
		if (i!= 49) 
		{
			printf(", ");
		}
		actual = actual + anterior;
		anterior = actual - anterior;
	}
	printf("\n");
}
