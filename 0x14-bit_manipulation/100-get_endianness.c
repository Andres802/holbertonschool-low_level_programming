#include "holberton.h"
/**
 * clear_bit - Function that changes the bit for 0 in the respctive index
 * @void: variable
 * Return: Always 0if big endian or 1 if little indian
 */
int get_endianness(void)
{ 
   unsigned int i = 1; 
   char *c = (char*)&i; 
   return (*c ? 1 : 0);
}