#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_dog - a function that frees space allocated
  * @d: pointer variable to memory allocated
  * Return: Void
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
