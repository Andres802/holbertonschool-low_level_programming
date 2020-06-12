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
	int third;

	for (first = 48; first < 58; first++)
	{
		for (second = first + 1; second < 58; second++)
		{
			for (third = second + 1; third < 58; third++)
			{
			putchar(first);
			putchar(second);
			putchar(third);
			if (first < 55 || second < 55)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
