#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string
 * Return: Void
 */
void puts_half(char *str)
{
	int length = 0;
	int half_length = length / 2;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	if (length % 2 == 1)
	{
		half_length += 1;
	}
	int x;

	for (int x = half_length; x < length; x++)
	{
		_putchar(str[x]);
	}
}
