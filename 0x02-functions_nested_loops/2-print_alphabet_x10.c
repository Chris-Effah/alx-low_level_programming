#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int x;
	char a;

	for (x = 0; x < 10; x++)
	{
		for (a = 'a'; a <= 'z'; )
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
