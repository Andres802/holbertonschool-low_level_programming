#include"holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer char parameter destination
 * @n: source char ointer parameter
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
int i, temp, size;

size = n - 1;
i = 0;

while (i < size)
{
temp = a[i];
a[i] = a[size];
a[size] = temp;
i++;
size--;
}
}
