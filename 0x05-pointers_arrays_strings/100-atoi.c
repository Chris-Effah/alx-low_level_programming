#include "main.h"
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
