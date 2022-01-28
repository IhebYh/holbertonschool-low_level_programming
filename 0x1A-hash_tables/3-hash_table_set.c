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
	hash_node_t *hash_node, *tmp;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	size = ht->size;
	tmp = ht->array[i = key_index((const unsigned char *)key, size)];
	while (tmp != NULL)
	{
		if (tmp && strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[i];
	ht->array[i] = hash_node;
	return (1);
}
/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}