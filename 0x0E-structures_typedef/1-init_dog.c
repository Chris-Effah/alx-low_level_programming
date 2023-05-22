#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer variable to the struct dog
 * @name: element in struct
 * @age: element in struct
 * @owner: element in struct
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
