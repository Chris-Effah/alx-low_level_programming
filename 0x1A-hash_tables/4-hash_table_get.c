#include "hash_tables.h"
/**
  * hash_table_get - a function that retrieves a value associated with a key
  * @ht: hash table
  * @key: key
  * Return: the value associated with the key
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;

	}
	return (NULL);
}
