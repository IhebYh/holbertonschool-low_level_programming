#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key given
 * Return: char
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t *node;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0
		|| key == NULL || strlen(key) == 0)
		{
			return (NULL);
		}
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
