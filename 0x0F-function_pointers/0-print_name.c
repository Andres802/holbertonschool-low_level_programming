#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name of the person to print
 * @f: the pointer to the function
 * Return: Nothing because is a void function
 */
void print_name(char *name, void (*f)(char *))
{
/*we first check if their value are NULL*/
	if ((*f) == '\0')
	return;
	/* assing or dereference the pointer to the function f*/
	/* to the pointer name */
	(*f)(name);
}
