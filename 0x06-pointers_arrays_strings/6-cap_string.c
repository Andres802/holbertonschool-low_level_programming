#include"holberton.h"
/**
 * cap_string - function that ccapitalizes all the word of a string
 * @s: pointer char parameter destination
 * Return: Always 0 (Success)
 */
#include<stdio.h>

char *cap_string(char *s)
{
int i;
int j;
char p[] = " \t\n,;.!\?\"(){}";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; p[j] != '\0'; j++)
{
if (s[i] == p[j])
{
if (s[i + 1] > 96 && s[i + 1] < 123)
{
s[i + 1] = s[i + 1] - 32;
}
}
else if (i == 0)
{
if (s[i] > 96 && s[i] < 123)
{
s[i] = s[i] - 32;
}
}
}
}
return (s);
}
