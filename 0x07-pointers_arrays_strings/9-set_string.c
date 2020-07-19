#include "holberton.h"
/**
 * set_string - function that function that sets the value of a pointer to a char
 * @s: pointer to a char s0
 * @to: pointer to a char s1
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}