#include <stdio.h>

/**
 * main - size of evaluates the size of a variable
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{       int intType;
	float floatType;
	longint longintType;
	char charType;
	longlongint longlongintType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of int: %ld byte(s)\n", sizeof(intType));
	printf("Size of longint: %ld byte(s)\n", sizeof(longintType));
	printf("Size of longlongint: %ld byte(s)\n", sizeof(longlongintType));
	printf("Size of float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}