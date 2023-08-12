#include "hash_tables.h"

/**
  * hash_table_print - a function that prints a hash table
  * @ht: the hash table
  * Return: Void
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int c = 1;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (!c)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			c = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}
