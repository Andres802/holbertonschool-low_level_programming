#include <stdio.h>
#include <stdlib.h>
/**
* main - This will print the name itself
* @argc: number of arguments
* @argv: value of an argument
* Return: always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
