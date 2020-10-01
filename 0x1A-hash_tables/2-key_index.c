#include "hash_tables.h"

/**
 * key_index - give the index of the key
 * @key: value to check the index
 * @size: Size of the previosly created  array hast table
 *
 * Description: return the index where is located
 * Return: index where key/vale should be stored in the array fo hast table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
	/** size = size of the array to be modulo of the key and hash algo**/
}
