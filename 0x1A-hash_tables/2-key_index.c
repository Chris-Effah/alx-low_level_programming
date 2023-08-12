#include "hash_tables.h"

/**
  * key_index - a function to obtain the index of the key
  * @key: a string that points to the key
  * @size: size of the array
  * Return: an index at which the key value pair is stored in the array
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
