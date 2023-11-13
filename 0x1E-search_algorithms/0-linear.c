#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: array to searcg in
 * @size: number of elements in an array
 * @value: value to search for
 * Return: first index where the value is located at
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
