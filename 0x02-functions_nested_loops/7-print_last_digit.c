#include "main.h"
/**
 * print_last_digit - prints last digit.
 * @x: The last digit to print
 * Return: The value of the last digit
 */
int print_last_digit(int x)
{
	int ld;

	ld = x % 10;

	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
