#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: prints the alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase
 * and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
