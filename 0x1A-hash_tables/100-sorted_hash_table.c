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

	if (size == 0)
		return (NULL);

	htable = malloc(sizeof(shash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = calloc(size, sizeof(shash_node_t *));
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	htable->shead = NULL;
	htable->stail = NULL;

	return (htable);
}
