#include "main.h"
/**
 * _strpbrk - a function that searches a string for a set of bytes
 * @s: first string
 * @accept: second string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)

			if (s[x] == accept[y])
			{
				return (&s[x]);
			}
	}
	return (0);
}
