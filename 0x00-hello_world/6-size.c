#include <stdio.h>
/**
 * main-c program that prints the size of data types
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	printf("size of char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("size of long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of float: %ld byte(s)\n", (unsigned long)sizeof(float));
	printf("size of long long int: %ld byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of int: %ld byte(s)\n", (unsigned long)sizeof(int));
	return (0);
}
