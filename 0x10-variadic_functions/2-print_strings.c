#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings -  a function that prints strings
  * @separator: is the string to be printed between the strings
  * @n: the number of strings passed to the function
  * Return: Void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list strings;
	char *str;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		 if (x < (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(strings);
}
