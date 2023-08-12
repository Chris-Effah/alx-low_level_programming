#include "hash_tables.h"

/**
  * hash_table_delete - a function that deletes a hash table
  * @ht: the hash table
  * Return: Void
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	hash_node_t *next;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{

		temp = ht->array[index];

		while (temp != NULL)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
}
