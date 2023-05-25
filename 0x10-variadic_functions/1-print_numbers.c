#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - a function that prints numbers
  * @separator: is the string to be printed between numbers
  * @n: number of integers passed to the function
  * Return: Void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int x = 0;

	va_start(num, n);

	while (x < n)
	{
		printf("%d", va_arg(num, int));
		x++;

		if (x < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(num);
}
