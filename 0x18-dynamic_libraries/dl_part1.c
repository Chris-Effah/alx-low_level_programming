#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: character to print
 * Return: 1 if c is lowercase
 * and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

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

#include "main.h"
/**
 *  _abs - a function that computes the absolute value of an integer.
 * @n: input number as an integer
 * Return: Abosulte value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
		n *= -1;
	return (n);
}

#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: prints uppercase character
 * Return: Always 0.
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"


/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: integer to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= 48  && c <= 57);
}

