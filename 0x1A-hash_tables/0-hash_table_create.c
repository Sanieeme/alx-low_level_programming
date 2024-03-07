#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of array
 * Return: NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int j;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		table->array[j] = NULL;
	return (table);
}
