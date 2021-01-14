#include "search_algos.h"
/**
 * advanced_binary - function to find with an advanced binary search
 * a number in an array
 * @array: array to find the value
 * @size: size of the array
 * @value: value to find
 * Return: the index of the value or -1 if the array is NULL or the value was
 * not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (aux_advanced_binary(array, 0, size - 1, value));
}
/**
 * aux_advanced_binary - function to find with an advanced binary search
 * a number in an array
 * @array: array to find the value
 * @low: low index in the array
 * @high: high index in the array
 * @value: value to find
 * Return: the index of the value or -1 if the array is NULL or the value was
 * not found
 */
int aux_advanced_binary(int *array, int low, int high, int value)
{
	int i, half;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	half = low + ((high - low) / 2);
	if (array[half] == value && array[half - 1] != value)
		return (half);
	if (low == high)
		return (-1);
	if (array[half] >= value)
		return (aux_advanced_binary(array, low, half, value));
	if (array[half] < value)
		return (aux_advanced_binary(array, half + 1, high, value));
	return (-1);
}
