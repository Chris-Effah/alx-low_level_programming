#include "main.h"
#include <stdio.h>
/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 0 (Always successfully)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
