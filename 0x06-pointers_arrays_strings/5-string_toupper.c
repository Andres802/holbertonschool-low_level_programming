#include"holberton.h"
/**
 * string_toupper - function that changes lowercase letter to uppercase
 * @n: pointer char parameter destination
 * Return: Always 0 (Success)
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 97 && n[i] <= 122)
{
char temp;
temp = n[i];
n[i] = temp - 32;
}
i++;
}
return (n);
}
