#include "main.h"
#include <stdlib.h>
/**
 * create_array -  a function that creates an array of chars
 * @c: specific character for array to be initialized with
 * @size: size of the array to be created
 * Return: a pointer to the array created or null if it fails .
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (array == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
