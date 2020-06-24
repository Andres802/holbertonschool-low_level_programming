#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */
void rev_string(char *s)
{
	int i, j; temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--; /** get the last position of the array before null */
	j = 0;
	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++:
	}
}
