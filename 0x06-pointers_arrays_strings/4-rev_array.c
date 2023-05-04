#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x < --n; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
