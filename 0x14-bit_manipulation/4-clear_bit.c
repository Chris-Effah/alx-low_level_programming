#include "main.h"
#include <stdio.h>
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: binary digit
 * @index:  is the index, starting from 0 of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	msk = ~(1UL << index);
	*n &= msk;

	return (1);
}
