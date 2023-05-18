#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non- digit char
 * @s: string to be checked
 * Return: 0 if a non- digit and 1 if otherwisw
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
  * _strlen - returns the length of a string
  * @s: string to determine the length of
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: 0 if program executes successfully and 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int x, y;
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > 57 || argv[x][y] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", mul);
	return (0);
}
