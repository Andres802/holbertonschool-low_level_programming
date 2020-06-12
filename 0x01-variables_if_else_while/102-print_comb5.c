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
	int four;

	for (first = 48; first < 58; first++)
	{
		for (second = 48; second < 58; second++)
		{
			for (third = first; third < 58; third++)
			{
				for (four = 48; four < 58; four++)
				{
					if (((first * 10) + second) != ((third * 10) + four))
					{
						if (((first * 10) + second) < ((third * 10) + four))
						{
							putchar(first);
							putchar(second);
							putchar(' ');
							putchar(third);
							putchar(four);
							if (first < 57 || second < 56 || third < 57 || four < 57)
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
