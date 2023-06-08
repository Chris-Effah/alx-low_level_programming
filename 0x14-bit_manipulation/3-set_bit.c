#include "main.h"
#include <stdio.h>
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: binary digit
 * @index: where index is the index, starting from 0 of the bit you want to set
 * Return: 1 if a success or -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	msk = 1UL << index;

	*n |= msk;

	return (1);/*bit set to 1 successfully*/
}
