#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to key
 * @key: key
 * @value: alue associated with the key.
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;
	char *new;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = hash_djb2((const unsigned char *)key, ht->size;
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new = strdup(value);
			if (new == NULL)
				return (0);
			free(temp->value);
			temp->value = new;
			return (1);
		}
		temp = temp->next;
	}

	node = make_hash_node(key, value);

	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
