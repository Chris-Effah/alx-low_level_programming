#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * new_dog - a function that creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner's name
  * Return: a pointer to struct dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_s = NULL;
	char *owner_s = NULL;
	dog_t *dog = NULL;

	size_t name_len = strlen(name);
	size_t owner_len = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	name_s = malloc((name_len + 1) * sizeof(char));

	if (name_s == NULL)
	{
		free(dog);
		return (NULL);
	}


	owner_s = malloc((owner_len + 1) * sizeof(char));

	if (owner_s == NULL)
	{
		free(dog);
		free(name_s);
		return (NULL);
	}
	strcpy(name_s, name);
	strcpy(owner_s, owner);

	dog->name = name_s;
	dog->owner = owner_s;
	dog->age = age;

	return (dog);
}
