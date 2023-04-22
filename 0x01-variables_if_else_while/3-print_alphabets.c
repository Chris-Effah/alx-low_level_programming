#include <stdio.h>

/**
 * main - C program that prints alphabet in lowercase and uppercase
 *
 * Return: 0 if program executes succesfully
 *
 */
int main(void)
{
	int n = 97;
	int a = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
