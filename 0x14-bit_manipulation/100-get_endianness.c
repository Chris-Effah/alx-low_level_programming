#include "main.h"
#include <stdio.h>
/**
  * get_endianness - a function that checks if a system is a little or big
  * endian.
  * Return: 0 if its a big endian and 1 if its a liitle endian
  */
int get_endianness(void)
{
	int x = 1;

	return (*(char *)&x == 1);
}
