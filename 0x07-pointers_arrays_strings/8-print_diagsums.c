#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - a functio that prints the sum of two diagonals
 * @a: name of array
 * @size: size of the array
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - x - 1)];
	}
	printf("%d,  %d\n", sum1,  sum2);
}
