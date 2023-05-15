#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return:The returned pointer should point to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *s1s2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	s1s2 = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s1s2[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s1s2[i + j] = s2[j];
	}
	s1s2[i + j] = '\0';
	return (s1s2);
}
