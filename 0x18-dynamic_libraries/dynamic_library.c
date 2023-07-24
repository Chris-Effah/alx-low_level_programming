#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
#include "main.h"
/**
 * _strcat - function that concantenates two strings together.
 * @dest: first string input
 * @src: second string input
 * Return: Void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
#include "main.h"
/**
 * _strncpy -  a function that copies a string
 * @dest: string to be copied
 * @src: string to be copied
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: s1[x] - s2[x]
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}

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

