#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
