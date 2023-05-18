#include "main.h"
#include <stdlib.h>

/**
  * array_range - a function that creates an array of integers.
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to the new array created
  */
int *array_range(int min, int max)
{
	int *c;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	c = malloc(sizeof(int) * size);

	if (c == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		c[x] = min++;

	return (c);
}
