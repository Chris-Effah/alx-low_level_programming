#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: prefix string
 * @accept: string
 * Return:  number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				n++;
				break;
			}
		}
		if (accept[y] == '\0')
			break;
	}
	return (n);
}
