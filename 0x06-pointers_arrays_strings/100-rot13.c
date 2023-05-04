#include "main.h"
/**
 * rot13 -  a function that encodes a string using rot13.
 * @str: pointer to string parameters
 * Return: str
 */
char *rot13(char *str)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == data1[y])
			{
				str[x] = datarot[y];
				break;
			}
		}
	}
	return (str);
}
