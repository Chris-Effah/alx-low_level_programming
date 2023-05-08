#include "main.h"
#include <stddef.h>
/**
 * _strchr -  a function that locates a character in a string.
 * @s: string
 * @c: character
 * Return:  pointer to the first occurrence of the character c in the string s,
 * @NULL:  if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
