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
  * errors - handles errors for main
  */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: 0 if program executes successfully and 1 if there is an error
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, x, dig1, dig2, *res, c, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		res[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len1] - '0';
		c = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
			c += res[len1 + len2 + 1] + (dig1 * dig2);
			res[len1 + len2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[len1 + len2 + 1] += c;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (res[x])
			a = 1;
		if (a)
			_putchar(res[x] + '0');
	}
	if (!a)
		_putchar('\0');
	_putchar('\n');
	free(res);
	return (0);
}
