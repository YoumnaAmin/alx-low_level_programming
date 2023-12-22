#include "hash_tables.h"
/**
 * hash_table_set - set the hash table
 * @ht: hash table pointer
 * @value: to store value
 * @key: key
 * Return: int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn, *coll;
	unsigned long int index;
	char *vdup, *kdup;

	if (!ht || !ht->array || !key || !key[0])
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	hn = ht->array[index];
	vdup = strdup(value);
	if (!vdup)
		return (0);
	while (hn != NULL)
	{
		if (!strcmp(hn->key, key))
		{
			free(hn->value);
			hn->value = vdup;
			return (1);
		}
		hn = hn->next;
	}
	hn = ht->array[index];

	coll = malloc(sizeof(hash_node_t));
	if (coll == NULL)
		return (free(vdup), 0);

	kdup = strdup(key);
	if (!kdup)
		return (free(vdup), free(coll), 0);

	coll->key = kdup;
	coll->value = vdup;
	coll->next = hn;
	ht->array[index] = coll;

	return (1);
}
