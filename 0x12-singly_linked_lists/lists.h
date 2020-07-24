#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/**
 * struct list_s - my structure
 * @str: char * parameter
 * @len: len
 * @next: next node
 */

size_t print_list(const list_t *h);
int _putchar(char c);
void __attribute__ ((constructor)) premain();
size_t list_len(const list_t *h);
void free_list(list_t *head);
#endif