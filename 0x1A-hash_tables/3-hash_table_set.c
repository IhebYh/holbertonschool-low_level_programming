#include "hash_tables.h"

/**
 * hash_table_set - add elements to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated to the key to add
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, size;
	hash_node_t *node, *tmp;

	if (!key || !value || !ht)
		return (0);
	size = ht->size;
	i = key_index((const unsigned char *)key, size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (tmp && strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
    {
        free(node->key);
        free(node);
    	return (0);
    }
	node->value = strdup(value);
	if (node->value == NULL)
    {
        free(node->value);
        free(node);
    	return (0);
    }
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
