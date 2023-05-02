#include "main.h"
/**
 * rev_string -  a function that reverses a string.
 * @s: string to be reversed
 * Return: Void
 */
void rev_string(char *s)
{
	int length = 0;
	char back;
	int x = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	while (x < length / 2)
	{
		back = s[x];
		s[x] = s[length - x - 1];
		s[length - x - 1] = back;
		x++;
	}
}

