#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr -  a function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	int i = 0;
	int len = ac;
	char *avn;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		len += strlen(av[x]);
	}
	avn = malloc((len + 1) * sizeof(char));
	if (avn == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			avn[i] = av[x][y];
			i++;
		}
		avn[i] = '\n';
		i++;
	}
	avn[i] = '\0';
	return (avn);
}
