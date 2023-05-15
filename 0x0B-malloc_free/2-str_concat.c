#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int length = 0;
	char *s1s2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[length] != '\0')
	{
		length++;
	}
	while (s2[length] != '\0')
	{
		length++;
	}
	s1s2 = malloc(length + 1 * sizeof(char));
	if (s1s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s1s2[i] = s1[i];
	}
	for (j = 0; j < length; j++)
	{
		s1s2[i + j] = s2[j];
	}
	s1s2[i + j] = '\0';
	return (s1s2);
}
