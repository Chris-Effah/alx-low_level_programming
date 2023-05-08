#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer variable,contains the memory addres of variable b
 * @b: value to fill the memory space
 * @n: number of bytes of memory to be filled
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
