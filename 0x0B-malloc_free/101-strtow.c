#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
  * word_len - Finds the index marking of the first word in a string
  * @str: The string to be checked
  * Return: The index marking of the first word pointed by str
  */
int word_len(char *str)
{
	int x = 0, len = 0;

	while (*(str + x) && *(str + x) != ' ')
	{
		len++;
		x++;
	}
	return (len);
}

/**
  * count_words - Count the number of words in a string
  * @str: The string to be counted
  * Return: The number of words counted
  */
int count_words(char *str)
{
	int i, x = 0, y = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			y++;
		}
	}
	return (y);
}

/**
  * strtow - Split a string into words
  * @str: The string to split
  * Return: if str = NULL, str = "", or the function fails - NULL.
  * Otherwise - a pointer to an array of strings (words).
  */
char **strtow(char *str)
{
	int a, c, no_of_words, i = 0, b = 0;
	char **split;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	no_of_words = count_words(str);
	if (no_of_words == 0)
		return (NULL);
	split = malloc(sizeof(char *) * (no_of_words + 1));
	if (split == NULL)
		return (NULL);
	for (a = 0; a < no_of_words; a++)
	{
		while (str[i] == ' ')
			i++;
		b = word_len(str + i);
		split[a] = malloc(sizeof(char) * (b + 1));

		if (split[a] == NULL)
		{
			for (;a >= 0; a--)
				free(split[a]);
			free(split);
			return (NULL);
		}
		for (c = 0; c < b; c++)
			split[a][c] = str[i++];
		split[a][c] = '\0';
	}
	split[a] = NULL;
	return (split);
}
