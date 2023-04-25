#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: Void
 */
void times_table(void)
{
	int x;

	for (x = 0; x >= 9; x++)
	{
		_putchar(x * '9');
		_putchar(',');
		_putchar(' ');
	}
}
