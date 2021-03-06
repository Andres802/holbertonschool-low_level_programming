#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: int parameter with the size of argv
 * @argv: char array of parameter passed to the program
 * Return: 1 error , 0 succesfull
 */
int main(int argc, char **argv)
{
	int  i, j, sum = 0;

	if (argv[1] == '\0')
	{
		printf("0\n");
	}
	else
	{
		/* go through the array  */
		for (i = 1; i < argc ; i++)
		{
			/* obtain ascii value of the character and verify if it's a number */
			for (j = 0; argv[i][j] != 0 ; j++)
			{
				if (argv[i][j] > 47 && argv[i][j] < 58)
				{
					continue;
				}
				/* it's different of a number */
				else
				{
				printf("Error\n");
				return (1);
				}
			}
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}