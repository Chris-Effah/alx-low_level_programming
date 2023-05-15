#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  function returns a pointer to a new string which is a duplicate
 * of the string
 * @str: string to be inputed
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i;
	char *str2;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	str2 = malloc((length + 1) * sizeof(char));
	if (str2 == NULL)
	{
		return (str2);
	}
	for (i = 0; i < length; i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';
	return (str2);
}
