#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * sum_them_all - a function that returns the sum of all its parameters
  * @n: one of the parameters to be printed
  * Return: 0 always
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;

	va_list para;

	va_start(para, n);
	va_arg(para, int);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(para, int);
	}
	va_end(para);

	return (sum);

}
