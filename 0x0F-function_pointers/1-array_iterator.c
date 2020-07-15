#include "function_pointers.h"
/**
 * array_iterator - prints name
 * @array: This is the pointer of the array
 * @action: the pointer to the function
 * @size: Size of the array
 * Return: Nothing because is a void function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
/* check if they both pointers are empty*/
	if (array == '\0' || action == '\0')
	return;
	for (i = 0; i < size; i++)
	(action)(array[i]);
}
