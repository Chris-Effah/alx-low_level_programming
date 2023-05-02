#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be printed in reverse
 * Return: Void
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	while (length >= 0)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
