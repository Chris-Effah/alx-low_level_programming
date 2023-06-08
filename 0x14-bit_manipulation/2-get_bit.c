#include "main.h"
#include <stdio.h>
/**
  *get_bit - a function to return the value of a bit at a given index.
  *@n: binary digit
  *@index: index starting from 0
  *Return:  the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int msk, bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	msk = 1UL << index;
	bit = n & msk;

	return (bit != 0);
}
