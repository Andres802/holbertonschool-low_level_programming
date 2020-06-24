#include<stdio.h>
#include"holberton.h"
/**
 * print_array -function that prints n elements of an array of integers
 * @a: and int parameter pointer
 * @n: int parameter - that means the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		/** while the number is not equal to before the last one **/
		if (i != (n - 1))
		{
			/** print the number + , + space **/
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
