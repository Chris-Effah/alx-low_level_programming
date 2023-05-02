#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be printed in reverse
 * Return: Void
 */
void print_rev(char *s)
{
	int length = 0;
	int x;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (x = length;  x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
