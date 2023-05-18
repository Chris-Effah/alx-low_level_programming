#include "main.h"
#include <stdlib.h>
/**
  * *_realloc - a function that reallocates a memory block
  * @ptr: pointer to the previously allocated memory
  * @old_size: size of the previously allocated memory
  * @new_size: size of the new memory block
  * Return: pointer to new allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *ptr1, *old_ptr;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = old_ptr[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = old_ptr[x];
	}
	free(ptr);
	return (ptr1);
}
