#include <stdio.h>
#include <stdlib.h>
/**
* main - This will print the multipliction of two integers
* @argc: number of arguments
* @argv: value of an argument
* Return: always 0
*/
int main(int argc, char **argv)
{
	int x, y;
	int result;
	int  i = 1;
	
		if (argc == 1)
		{
			printf("0\n");
		}
		else if (!(isdigit(*argv[i, i + 1])))
		{
			printf("Erroor\n");
		}
		else
		{
	    x = atoi(argv[i]);
	    y = atoi(argv[i + 1]);
		result = x + y;
	     printf("%i\n", result);
		}
		return (0);
	}
