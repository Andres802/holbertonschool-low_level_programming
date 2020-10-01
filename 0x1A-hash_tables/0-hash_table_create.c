#include "hash_tables.h"

/**
 * hash_table_create - function with one argument size
 * @size: size of array
 *
 * Description: creates a hash table
 * Return: pointer to new hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t = NULL;
	hash_node_t **h_a = NULL;

	/**create and allocate memory space of the node**/
	h_a = calloc(size, sizeof(char *));
	if (h_a == NULL)
	{
		free(h_a);
		return (NULL);
	}
	/**create and allocate memory for the future hash table**/
	h_t = calloc(1, sizeof(hash_table_t));
	if (h_t == NULL)
	{
		free(h_t);
		return (NULL);
	}

	/** set the size and array in the new hast table**/
	h_t->size = size;
	h_t->array = h_a;
	return (h_t);
}
