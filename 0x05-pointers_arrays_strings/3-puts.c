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
