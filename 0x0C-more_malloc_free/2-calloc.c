#include "main.h"
#include <stdlib.h>

/**
 **_memset - fills memory with a constant byte
 * @s: memory space to be filled
 * @b: character to copy
 * @n: number of times to copy the character
 * Return: pointer to the memory space
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
 * *_calloc -  function allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(size * nmemb);

	if (c == NULL)
		return (NULL);

	_memset(c, 0, nmemb * size);

	return (c);
}
