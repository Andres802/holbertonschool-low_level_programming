#include "search_algos.h"
/**
 * linear_search - function that searches for a value in
 * an array of integers using the Linear search algorithm
 * @array: pointer to head of the array
 * @size: size of the array
 * @value: valu to find in the array
 * Return: index position in the array, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
	{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);

	}
