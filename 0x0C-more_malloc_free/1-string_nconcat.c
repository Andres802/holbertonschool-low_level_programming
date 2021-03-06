#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - This function will concatenate s1 y s2
 * but s2 until n bytes
 * @s1: string type char
 * @s2: string type char
 * @n: n number bytes
 * Return: array concatenated s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *super_string;
unsigned int x;
unsigned int y;
unsigned int len1;
unsigned int len2;

if (s1 == '\0')
{
	s1 = "";
}
if  (s2 == '\0')
{
	s2 = "";
}
len1 = getsize1(s1);
len2 = getsize2(s2);
if (n >= len2)
	{
	n = len2;
	}
super_string = malloc(sizeof(char) * (len1 + n + 1));
if (super_string == NULL)
	{
	return (NULL);
	}
for (x = 0; s1[x] != '\0'; x++)
{
	super_string[x] = s1[x];
}
for (y = 0; y < n; y++, x++)
{
	super_string[x] = s2[y];
}
super_string[x] = '\0';
return (super_string);
}
/**
 * getsize1 - this function will get the lenght of s1
 * @s1: string pointer
 * Return: an int lenght of s1
 */
int getsize1(char *s1)
{
	int a;

	a = 0;
	while (s1[a] != '\0')
	a++;
	return (a);
}
/**
 * getsize2 - this function will get the lenght of s2
 * @s2: string pointer
 * Return: an int lenght of s1
 */
int getsize2(char *s2)
{
	int a;

	a = 0;
	while (s2[a] != '\0')
	a++;
	return (a);
}
