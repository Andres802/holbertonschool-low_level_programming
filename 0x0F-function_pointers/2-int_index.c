#include "function_pointers.h"
/**
 * int_index - check conditios is true with the number of the position of array
 * so basically seacrh fot the integer
 * @array: This is the pointer of the array
 * @cmp: the pointer to the function
 * @size: Size of the array
 * Return: Nothing because is a void function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c; /*counter*/

	if (array == '\0' || size <= '\0' || cmp == '\0')
	return (-1);

	for (c = 0; c < size; c++)
	if (cmp(array[c]))
	return (c);
	return (-1);
}
