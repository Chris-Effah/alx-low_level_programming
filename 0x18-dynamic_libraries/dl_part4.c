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

#include "main.h"
/**
 * _strchr -  a function that locates a character in a string.
 * @s: string
 * @c: character
 * Return:  pointer to the first occurrence of the character c in the string s,
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
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
#include "main.h"
/**
 * _strstr - a function that locates a string
 * @haystack: string to be searched
 * @needle: string to be searched for
 * Return: a pointer to the begining address of the string
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	for (x = 0; haystack[x]; x++)
	{
		for (y = 0; needle[y]; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (0);
}

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
