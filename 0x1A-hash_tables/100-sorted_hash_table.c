#include "hash_tables.h"
#include <stdlib.h>
/**
  * shash_table_create - a function to create a hash table
  * @size: size of an array
  * Return: an integer which is the index of the array
  */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htable = NULL;
	shash_node_t **new_array;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
