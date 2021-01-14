#include "search_algos.h"
/**
 * exponential_search - function to find with an exponential
 * search a number in an array
 * @array: arrayay to find the value
 * @size: size of the array
 * @value: value to find
 * Return: the index of the value or -1 if the array is NULL or the value was
 * not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int low = 1, high = size - 1;

	if (!array || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	while (low <= high)
	{
		if (array[low] >= value)
			return (aux_binary_search(array, low / 2, low, value));
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low *= 2;
	}
	return (aux_binary_search(array, low / 2, high, value));
}
/**
 * aux_binary_search - function to find with a binary search a number in array
 * @array: array to find the value
 * @low: starting index
 * @high: last index
 * @value: value to find
 * Return: the index of the value or -1 if the array is NULL or the value was
 * not found
 */
int aux_binary_search(int *array, int low, int high, int value)
{
	int half, i;

	if (!array || high == 0)
		return (-1);
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		half = low + ((high - low) / 2);
		if (array[half] == value)
			return (half);
		else if (array[half] > value)
			high = half - 1;
		else
			low = half + 1;
	}
	return (-1);
}
