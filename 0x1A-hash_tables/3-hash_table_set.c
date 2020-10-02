#include "hash_tables.h"
/**
 * hash_table_set - adds elemnt to the hash table
 * @ht: hash table we want to add
 * @key: Key Value
 *@value: Value associated with the key
 * Description: return the index where is located
 * Return: 1 if succeed or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL, *new_node = NULL;
	unsigned long int index = 0;
	/** validate if the hash table does exist**/
	if (ht)
	{
		if (key != NULL && strlen(key) > 0)
			index = key_index((const unsigned char *)key, ht->size);
		else
		{
			return (0);
		}
	/**asssign the temp variable**/
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				/** free the value */
				free(temp->value);
				temp->value = strdup(value);
				if (temp->value == NULL)
					return (0);
				return (1);
			}
			temp = temp->next;
		}
		/* case no colision */
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		/* assign the values to new node */
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		if (new_node->key == NULL || new_node->value == NULL)
			return (0);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
