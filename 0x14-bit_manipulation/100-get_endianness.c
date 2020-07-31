#include "holberton.h"
/**
 * get_endianness- Function that check endianess
 * @void: void
 * Return: Always 0if big endian or 1 if little indian
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;
return (*c ? 1 : 0);
}
