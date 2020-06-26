#include "holberton.h"

/**
 * rot13 - a function that encodes a string into 1337
 * @s: pointer to array of characters.
 * Return: array of characters
 */
char *rot13(char *s)
{
	int i = 0;
	int j;

	char abc[] =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (abc[j] != '\0')
	    {
		    if (s[i] == abc[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
