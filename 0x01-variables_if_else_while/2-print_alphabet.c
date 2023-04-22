#include <stdio.h>

/**
 * main - C program that prints alphabet in lowercase
 *
 * Return: 0 if program executes succesfully
 *
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
