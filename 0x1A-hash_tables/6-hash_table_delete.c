
#include "hash_tables.h"

/**
 * hash_table_delete - delete  hash table
 * @ht: pointer to struct of hash table
 *
 * Description: free and delete hash table
 * Return: N/A
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *ptr = NULL, *ahead = NULL;
	/* i < que index (1024) */
	while (i < ht->size)
	{	/* assign the position of arrai[i] to ptr*/
		ptr = ht->array[i];
		while (ptr)
		{	/* free memore of the nodes na dlinked list*/
			ahead = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = ahead;
		}
		i++;
	}
	/* free memory of the hash tanle*/
	free(ht->array);
	free(ht);
}
