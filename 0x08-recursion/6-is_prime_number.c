#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - check if prime number
 *
 * @n: input variable
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - check if a number is prime
 *
 * @n: input variable
 *
 * @i: iterator
 *
 * Return: 1 or 0 Success
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
