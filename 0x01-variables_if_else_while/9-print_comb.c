#include <stdio.h>
/**
 * main -  a program that prints all possible combinations.
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n ==57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
