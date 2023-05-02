#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: string to be printed
 * Return: Void
 */
void puts2(char *str)
{
	int length = 0;
	int i;
	int x = 0;
	char *y = str;

	while (*y != '\0')
	{
		length++;
		y++;
	}
	x = length - 1;
	for (i = 0; i <= x; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
