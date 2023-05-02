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
	int x;
	int y;

	for (y = 0; str[y] != '\0'; y++)
		length++;

	if (length % 2 == 1)
		half_length = ((length + 1) / 2);

	for (x = half_length; x != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
