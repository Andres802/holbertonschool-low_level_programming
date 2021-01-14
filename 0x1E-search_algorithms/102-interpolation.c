#include "search_algos.h"
/**
 * interpolation_search - function to find with a interpolation
 * search a number in an array
 * @array: arrayay to find the value
 * @size: size of the array
 * @value: value to find
 * Return: the index of the value or -1 if the array is NULL or the value was
 * not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int l = 0, h = size - 1, pos;

	if (!array || size == 0)
		return (-1);
	while (l <= h)
	{
		if (l == h)
			if (array[l] == value)
				return (l);
		pos = l + (((double)(h - l) / (array[h] - *(array + l)))
				* (value - *(array + l)));
		if (pos > h)
		{
			printf("Value checked array[%i] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%i] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
