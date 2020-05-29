#include "hash_tables.h"

/**
 * hash_table_get - return value for given key
 * @ht: table passed
 * @key: key to search with
 * Return: key's value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hashnode;
	unsigned int idx;

	idx = hash_djb2((unsigned char *) key);

	if (!key || !ht)
		return (NULL);

	hashnode = ht->array[idx % ht->size];

	while (hashnode)
	{
		if (strcmp(hashnode->key, key) == 0)
		{
			return (hashnode->value);
		}
		hashnode = hashnode->next;
	}
	return (NULL);
}
