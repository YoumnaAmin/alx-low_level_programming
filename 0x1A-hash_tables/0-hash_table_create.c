#include "hash_tables.h"
/**
 * hash_table_create - to create a hash table
 * @size: size of the tabele
 * Return: struct of hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
