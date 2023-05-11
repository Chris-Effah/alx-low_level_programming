#include "main.h"
int n_prime(int n, int i);

/**
 * is_prime_number -  a function that returns 1 if the input integer is a
 * prime number,
 * @n: number to be inputed
 * Return: 1 if n is a prime number and o if n is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (n_prime(n, n - 1));
}
/**
  * n_prime - checks if n is prime recursive
  * @n: number to be evaluated
  * @i: iterator
  * Return: 1 if n is prime, 0 if not
  */
int n_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (n_prime(n, i - 1));
}

