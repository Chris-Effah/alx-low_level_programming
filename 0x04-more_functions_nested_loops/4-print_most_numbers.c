#include "main.h"
/**
 * print_most_numbers - checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50)
		{
			if (x != 52)
			{
				_putchar(x);
			}
		}
	}
	_putchar('\n');
}
