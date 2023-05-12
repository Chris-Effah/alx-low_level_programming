#include "main.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: destination of copied memory area
 * @src: source of copied memory area
 * @n: number of bytes of copied memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		dest[x] = src[x];
		n--;
	}

	return (dest);
}
