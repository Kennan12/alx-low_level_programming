#include "hash_table.h"
/**
 * hash_table_get - Retrive a value assoiciated with a key
 * @ht: hash table
 * @key: key to use retrieve value
 * Return: value associated with key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key->idex((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	if (tmp == NULL)
		return (NULL);

	while (strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);
	return (tmp->value);
}
