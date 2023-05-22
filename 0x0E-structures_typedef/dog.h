#ifndef DOG_H
#define DOG_H
/**
  * struct dog - a data structure
  * @name: element of the struct
  * @age: element of the struct
  * @owner: elememt of the struct
  * Return: a struct
  */
typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
