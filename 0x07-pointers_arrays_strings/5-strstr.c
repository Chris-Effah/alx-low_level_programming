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
