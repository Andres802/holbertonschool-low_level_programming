#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers and exclude symbols
 * @argc: int parameter with the size of argv
 * @argv: char array of parameter passed to the program
 * Return: 1 error , 0 succesfull
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int result = 0;
	
	if (argv[1] == '\0')
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]!= 0; j++)
			{
				if (argv[i][j] > 47 && argv[i][j] < 58)
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
