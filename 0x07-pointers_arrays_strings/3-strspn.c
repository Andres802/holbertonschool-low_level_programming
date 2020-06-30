#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0' && s[i] != ' ')
{
	j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
				j++;
		}
		i++;
		}
	return (i - 1);
}
