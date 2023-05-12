#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
* @s: string to be converted
* Return: string converted to integer
*/
int _atoi(char *s)
{
	int n = 0, a = 0, x = 0, length = 0, y = 0, digit = 0;

	while (s[length] != '\0')
		length++;

	while (n < length && y == 0)
	{
		if (s[n] == '-')
			a++;

		if (s[n] >= '0' && s[n] <= '9')
		{
			digit = s[n] - '0';
			if (a % 2)
				digit = -digit;
			x = x * 10 + digit;
			y = 1;
			if (s[n + 1] < '0' || s[n + 1] > '9')
				break;
			y = 0;
		}
		n++;
	}

	if (y == 0)
		return (0);

	return (x);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: 0 if program executes successfully and 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
