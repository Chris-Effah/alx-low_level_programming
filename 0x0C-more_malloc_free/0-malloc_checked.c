#include "main.h"
#include <stdlib.h>
/**
  * *malloc_checked - a function that uses malloc to allocate memory
  * @b: variable whom memory is being allocated to
  * Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
