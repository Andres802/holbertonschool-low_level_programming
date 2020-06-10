#include<stdio.h>

/**
 * main - size of evaluates the size of a variable
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{      
int intType;
float floatType;
long int longintType;
char charType;
long long int longlongintType;

printf("Size of char: %ld byte(s)\n", sizeof(charType));
printf("Size of int: %ld byte(s)\n", sizeof(intType));
printf("Size of long int: %ld byte(s)\n", sizeof(longintType));
printf("Size of long long int: %ld byte(s)\n", sizeof(longlongintType));
printf("Size of float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
