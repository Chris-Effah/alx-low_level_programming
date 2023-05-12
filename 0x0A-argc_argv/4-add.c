#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_digit - check for numbers
 * @str: string to be checked
 * Return: 0
 */
int check_digit(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - a program that adds positive number
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_digit(argv[count]))
		{
			str_to_int =  atoi(argv[count]);

			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;

	}
	printf("%d\n", sum);
	return (0);
}
