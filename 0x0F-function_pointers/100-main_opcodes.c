#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: arguments passed in the main function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, x;
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

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", a[x]);
			break;
		}
		printf("%02hhx ", a[x]);
	}
	return (0);
}


