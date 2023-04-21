#include <stdio.h>
/**
 * main-c program that prints the size of data types
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
