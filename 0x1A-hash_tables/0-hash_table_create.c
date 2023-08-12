#include "hash_tables.h"
#include <stdlib.h>
/**
  * hash_table_create - a function to create a hash table
  * @size: size of an array
  * Return: an integer which is the index of the array
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = NULL;
	hash_node_t **new_array = NULL;

	if (size == 0)
		return (NULL);


	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
	{
		return (NULL);
	}

	new_array = calloc(size, sizeof(hash_node_t *));
	if (new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}

	htable->size = size;
	htable->array = new_array;

	return (htable);

}
