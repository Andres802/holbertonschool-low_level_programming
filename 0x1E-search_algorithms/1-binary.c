#include "search_algos.h"
/**
* binary_search - function tahta searches for a
* value in a sorted array of integerts
* @array: Pointer to the sorted array
* @size: Size of the sorted array
* @value: Value to search in the sorted array
* Return: the value of the index where value is located
* or -1 if the array is NULL or the value was
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, half, i;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		half = left + ((right - left) / 2);
		if (array[half] == value)
			return (half);
		else if (array[half] > value)
			right = half - 1;
		else
			left = half + 1;
	}
	return (-1);
}
