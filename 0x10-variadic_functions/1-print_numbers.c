#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - add a separator to the array
 * @n: number
 * @separator: String passed to prototype
 * Return: the sum of the integers, result sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	/*if (n <= 0)
		return;*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
