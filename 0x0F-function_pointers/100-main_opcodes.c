#include "function_pointers.h"
#include <stdio.h>

/**
  * main - a function that prints the opcodes of its own main function
  * @argc: number of arguments
  * @argv: arguments passed in the main function
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int bytes, x = 0;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)main;

	while (x < bytes)
	{
		printf("%02x", a[x]);
		x++;
	}
	printf("\n");

	return (0);
}
