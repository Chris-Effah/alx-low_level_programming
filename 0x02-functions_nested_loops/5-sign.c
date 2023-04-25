#include "main.h"
/**
  * print_sign - a function that prints the sign of a number.
  *  @n: the number to print
  * Return: 1 if n is greater than zero
  *  0 if n is zero
  *  -1  if n is less than zero
  */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
