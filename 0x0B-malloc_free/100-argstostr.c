#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  a function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	int len = 0;
	char *avn;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			len++;
		}
		len++;
	}
	avn = malloc((len + ac + 1) * sizeof(char));
	if (avn == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			avn[len] = av[x][y];
			len++;
		}
		avn[len] = ' ';
		len++;
	}
	avn[len] = '\0';
	return (avn);
}
