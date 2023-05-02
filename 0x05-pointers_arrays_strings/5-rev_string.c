#include "main.h"
/**
 * rev_string -  a function that reverses a string.
 * @s: string to be reversed
 * Return: Void
 */
void rev_string(char *s)
{
	int length = 0;
	char backwards = s[0];
	int x;

	while (s[length] != '\0')
		length++;
	for (x = 0; x < length; x++)
	{
		length--;
		backwards = s[x];
		s[x] = s[length];
		s[length] = backwards;
	}
}

