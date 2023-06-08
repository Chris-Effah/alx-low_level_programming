#include "main.h"
#include <stdio.h>
/**
  * print_binary - a function that prints the binary representation of a
  * number
  * @n: decimal number whose binary value is to printed
  * Return: Void
  */
void print_binary(unsigned long int n)
{
	unsigned long int msk;
	int ld = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	msk = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (msk > 0)
	{
		if (n & msk)
		{
			ld = 0;
			printf("1");
		}
		else if (!ld)
			printf("0");
		msk >>= 1;
	}
}
