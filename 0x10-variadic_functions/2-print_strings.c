#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print string with separator
 * @n: number
 * @separator: String passed to prototype
 * Return: the sum of the integers, result sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p_strings;
	unsigned int i;
	char *c;

	va_start(p_strings, n);

	for (i = 0; i < n; i++)
	{
		c = (va_arg(p_strings, char *));
		if (c)
			printf("%s", c);
		if (!c)
			printf("(nil)");
			if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p_strings);
}
