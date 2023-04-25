#include "main.h"
/**
 * main - prints 10 times the alphabet, in lowercase
 * Return: 0 (Success)
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
