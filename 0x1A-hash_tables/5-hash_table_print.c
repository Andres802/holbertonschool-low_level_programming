#include "hash_tables.h"
/**
 * hash_table_print - get or retrieve elemeent  associated with the key
 * @ht: pointer hash table we want to print to
 * Description: print the hash table in order of apereance
 * Return: Return printed hash table or NULL if it doesn't print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned int index = 0, temp = 0;

	if (ht == NULL)
		return;

	printf("{");
	/*index start at 0 < size array 1024*/
	while (index < ht->size)
	{	/* if atposition index # is empty continue until it find somethng*/
		if (ht->array[index] == NULL)
		{
			index++;
			continue;
		}
		if (temp == 1)
			printf(", ");
		temp = 1;
		/* assign the index number to tmp*/
		tmp = ht->array[index];
		while (tmp)
		{
			printf("'%s' : '%s'", tmp->key, tmp->value);
			if (tmp->next != NULL)
				printf(", ");
				/*print the valy and key of the same position of the arrey*/
			tmp = tmp->next;
		}
		index++;
	}
	printf("}\n')");
}
