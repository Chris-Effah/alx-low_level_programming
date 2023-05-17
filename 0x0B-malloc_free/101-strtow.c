#include "main.h"
#include <stdlib.h>
/**
 * count_word - a function to count the words of a string
 * @s: string to be counted
 * Return: number of words counted
 */
int count_word(char *s)
{
	int x = 0;
	int y = 0;
	int i;

	for (i = 0; s[i] !- '\0'; i++)
	{
		if (s[i] == ' ')
		{
			x = 0;
		}
		else if (x == 0)
		{
			x = 1;
			y++;
		}
	}
	return (y);
}
/**
  * strtow - function that splits a string into words
  * @str: string to be split
  * Return: pointer to an array of strings
  */
char **strtow(char *str)
{
	int len = 0;
	char *split, *new;
	int a;
	int b = 0;
	if (str == NULL || str == "")
	{
		return (NULL);
	}
	while (str != 0)
	{
		len++;
	}
	while (*(str + len))
	{
		len++;
	}
	no_of_words = count_word(str);
	if (no_of_words == 0)
	{
		return (NULL);
	}
	split = malloc((no_of_words + 1) * sizeof(char*));
	if (split == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= len; a++)
	{
		if (str[a] == '' || str[a] == '\0')
		{
			if (i)
			{
				end = a;
				new = malloc((i + 1) * sizeof(char));
				if (new == NULL)
				{
					return (NULL);
				}
				while (start < end)
				{
					*new++ = str[start++];
				}
				*new = '\0';
			}
		}
	}
	split[b] = new - i;
	b++;
	i = 0;

	else if (i++ == 0)
	{
		start = a;
	}
	split[b] = NULL;
	return (split);
}
