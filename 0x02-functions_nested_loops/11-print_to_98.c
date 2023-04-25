#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  a function that prints all natural numbers from n to 98
 * @x: The natural number to print
 * Return: void
 */
void print_to_98(int x)
{
	while (x < 98)
	{
		printf("%i, ", x);
		x++;
	}

	while (x > 98)
	{
		printf("%i, ", x);
		x--;
	}
	printf("98");
	putchar('\n');
}
