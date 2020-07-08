#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat -  This function concatenate two strings
 * in a new allocated memory space
 * @s1: string
 * @s2: string
 * Return: array concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *concaString;
	int x;
	int y;
	int len1;
	int len2;
	/** check if the strings are empty*/
	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	len1 = getsize1(s1);
	len2 = getsize2(s2);
	/** malloc to get the addres of my two string and handle with concatString*/
	concaString = malloc(sizeof(char) * (len1 + len2 + 1));
	/** check if malloc fail*/
	if (concaString == NULL)
	return (NULL);
	/** insert s1 to my new array */
	for (x = 0; s1[x] != '\0'; x++)
	{
		concaString[x] = s1[x];
	}
	/** insert s2 in to my new array that already has s1 */
	for (y = 0; s2[y] != '\0'; y++, x++)
	{
		concaString[x] = s2[y];
	}
	/** insert the null value to the end of s2 */
	concaString[x] = '\0';
	/** return the pointer to the concasting */
	return (concaString);
}
/**
 * getsize1 - function that calculate lenght
 * @s1: string pointer
 * Return: int
 */
int getsize1(char *s1)
{
	int a;
	/** get the s1 lenght */
		a = 0;
		while (s1[a] != '\0')
			a++;
		return (a);
}
/**
 * getsize2 - function that calculate lenght
 * @s2: string pointer
 * Return:  int
 */
int getsize2(char *s2)
{
	int a;
	/** get the s2 lenght */
		a = 0;
		while (s2[a] != '\0')
			a++;
		return (a);
}
