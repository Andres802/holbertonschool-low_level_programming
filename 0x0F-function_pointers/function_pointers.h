#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
#include <stddef.h> /*define the macros*/

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
#endif
