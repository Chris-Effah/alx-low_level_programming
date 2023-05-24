#include "function_pointers.h"
#include <stdio.h>
/**
  * int_index - a function that searches for an integer
  * @array: array of integers
  * @size: size of array
  * @cmp: function pointer
  * Return: the index of the first element for which the cmp function does not
  * return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		return (x);
	}
	return (-1);
}
