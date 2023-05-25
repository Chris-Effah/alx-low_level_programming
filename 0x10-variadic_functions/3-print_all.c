#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					printf("%s", (str == NULL) ? "(nil)" : str);
				}
				break;
			default:
				break;
		}
	if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
	{
		printf(", ");
	}
		i++;
	}

	printf("\n");

	va_end(args);
}

