#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 *@s: string to be inputed
 *Return: Always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

#include "main.h"
/**
 *_puts - a function that prints a string
 *@str: string to be printed
 *Return: Void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to
 * @dest: destination for copied string
 * @src: variable pointed to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: string converted to integer
 */
int _atoi(char *s)
{
	int n = 0, a = 0, x = 0, length = 0, y = 0, digit = 0;

	while (s[length] != '\0')
		length++;

	while (n < length && y == 0)
	{
		if (s[n] == '-')
			a++;

		if (s[n] >= '0' && s[n] <= '9')
		{
			digit = s[n] - '0';
			if (a % 2)
				digit = -digit;
			x = x * 10 + digit;
			y = 1;
			if (s[n + 1] < '0' || s[n + 1] > '9')
				break;
			y = 0;
		}
		n++;
	}

	if (y == 0)
		return (0);

	return (x);
}

#include "main.h"
/**
 * _strncat -  a function that concatenates two strings.
 * @dest: first string input
 * @src: second string input.
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

