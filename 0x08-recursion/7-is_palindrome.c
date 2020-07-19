#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
#include "holberton.h"
/**
 * is_palindrome- function returns 1 is palindrome or 0 if not
 * @char: string to check
 * @str: string to check the lengh
 * Return: returns 1 if it is palindrome
 */
int is_palindrome(char *str[])
{
int n = strlen(str);

if (n == 0)
{
	return (1);
	return (isPalRec(*str, 0, n - 1));
}
}
/**
 * isPalRec- check if is palindrome or not
* @str: String
* @s: begining of the string
* @e: end of the string
* Return: 1 if is palindrome or 0 otherwise
*/
int isPalRec(char *str[], int s, int e)
{
	if (s == e)
	{
		return (1);
	}
	if (str[s] != str[e])
	{
		return (0);
	}
	if (s < e + 1)
	{
		return (isPalRec(str, s + 1, e - 1));
		return (1);
	}
}
