#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - function returns 1 is palindrome or 0 if not
 * @char: string to check
 * @str: string to check the lengh
 * Return: returns 1 if it is palindrome
 */
int is_palindrome(char str[])
{
int n = strlen(str);
/**
* An empty string is
* considered as palindrome
*/
if (n == 0)
{
	return (1);
	return (isPalRec(str, 0, n - 1));
}
}
/**
* A recursive function that
* check a str[s..e] is palindrome or not.
*/
/**
* isPalRec - check if is palindrome or not
* @str: String
* @s: begining of the string
* @e: end of the string
*/
int isPalRec(char str[], int s, int e)
{
	/**
	*If there is only one character
	*/
	if (s == e)
	{
		return (1);
	}
	/**
	* If first and last
	* characters do not match
	*/
	if (str[s] != str[e])
	{
		return (0);
	}
	/**
	* If there are more than
    * two characters, check if
    * middle substring is also
    * palindrome or not.
	*/
	if (s < e + 1)
	{
		return (isPalRec(str, s + 1, e - 1));
		return (1);
	}
}