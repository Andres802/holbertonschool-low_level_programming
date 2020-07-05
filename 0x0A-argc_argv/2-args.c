#include <stdio.h>
#include <stdlib.h>
/**
* main - This will print number of argv
* @argc: number of arguments
* @argv: value of an argument
* Return: always 0
*/
int main(int argc, char ** argv)
{
	while (argc --)
	printf("%s\n", * argv ++);
	return (0);
}