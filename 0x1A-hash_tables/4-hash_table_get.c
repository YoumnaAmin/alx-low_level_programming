#include "hash_tables.h"
/**
 * hash_table_get - get a value of a key
 * @ht: the table
 * @key: the key
 * Return: value of the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hn;

	if (!ht || !key || !key[0])
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	hn = ht->array[index];
	while (hn != NULL)
	{
		if (!strcmp(hn->key, key))
		{
			return (hn->value);
		}
		hn = hn->next;
	}
	return (NULL);
}
