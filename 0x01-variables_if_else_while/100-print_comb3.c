#include <stdio.h>
/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;

	for (first = 48; first < 58; first++)
	{
		for (second = first + 1; second < 58; second++)
		{
			putchar(first);
			putchar(second);
			if (first < 56 || second < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
