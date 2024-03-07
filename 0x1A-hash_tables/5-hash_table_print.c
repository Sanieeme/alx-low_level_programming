#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char j = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if ( j == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			j = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
