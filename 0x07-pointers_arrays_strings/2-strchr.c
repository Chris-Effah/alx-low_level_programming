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

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
