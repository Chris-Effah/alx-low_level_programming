#include <stdio.h>
/**
 * main-c program that prints the size of data types
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	printf("size of char: %ld\n", (long unsigned int)sizeof(char));
	printf("size of long int: %ld\n", (long unsigned int)sizeof(long int));
	printf("size of float: %ld\n", (long unsigned int)sizeof(float));
	printf("size of long long int: %ld\n", (long unsigned int)sizeof(long long int));
	printf("size of int: %ld\n", (long unsigned int)sizeof(int));
	return (0);
}
