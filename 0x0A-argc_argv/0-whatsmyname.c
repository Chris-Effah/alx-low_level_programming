#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name followed by a new line
 * @argc: number of arguments passed
 * @argv: name of arguments passed
 * Return: 0 if program executes succesfully
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
