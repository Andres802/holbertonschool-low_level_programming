#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calculate two numbers according the operator in the command line
 * @argc: arg counter
 * @argv: arguments
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	/*if number of conditions including the */
	/*name of the program is less than 4, print error*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* we have some couple of conditions here*/
	/*that if user use the dive / operator*/
	/*or the module % operator argc[2] and use 0*/
	/*in the postion of argv[3]*/
	/*the program will return ERROR*/

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/*In here we call the function from get_op_func*/
	/*and and do it's respective function*/
	/* with argv[2] and [3] which are prompt from the user.*/
	printf("%d\n", (*get_op_func)(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
