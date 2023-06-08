#include "main.h"
#include <stdio.h>
/**
  * flip_bits - a function that returns the number of bits that would be
  * needed to flip to get from one number to another.
  * @n: binary number
  * @m: second number
  * Return: number of flipped bits.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res, cnt = 0;

	xor_res = n ^ m;

	while (xor_res != 0)
	{
		cnt += xor_res & 1;
		xor_res >>= 1;
	}
	return (cnt);
}
