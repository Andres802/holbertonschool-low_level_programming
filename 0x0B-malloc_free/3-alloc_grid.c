#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: integer parameter
 * @height: integer parameter
 * Return: int pointer
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr2 = NULL;
	/** chech if parameter are 0 or less */
	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	/** create memory for my malloc type double pointer */
	ptr2 = malloc(sizeof(int *) * height);
	/** check if my ptr is on succes */
	if (ptr2 == NULL)
	{
		return (0);
	}
	/** opening spaces in the height for the width in each height*/
	for (x = 0 ; x < height ; x++)
	{
		/** opening spaces for the width*/
		ptr2[x] = malloc(sizeof(int) * width);
		if (ptr2[x] == NULL)
		{
			for (; x >= 0 ; x--)
			{
				free(ptr2[x]);
			}
			free(ptr2);
			return (NULL);
		}
	}
	/** fill the array both dimensions with 0 */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptr2[x][y] = 0;
	}
	return (ptr2);
}
