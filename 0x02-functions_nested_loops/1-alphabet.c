#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a';  c <= 'z';)

	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
