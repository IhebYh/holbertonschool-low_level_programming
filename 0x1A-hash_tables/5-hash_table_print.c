#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	char flag = 0; /* printing style handler */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
