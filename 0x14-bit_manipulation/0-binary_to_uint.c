#include "main.h"
#include <stdio.h>
/**
  * binary_to_uint - a function that converts a binary to an unsigned integer
  * @b: a string of 0 and 1 chars
  * Return: the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int conv = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		conv = conv << 1;
		conv += b[x] - '0';
		x++;
	}
	return (conv);

}
