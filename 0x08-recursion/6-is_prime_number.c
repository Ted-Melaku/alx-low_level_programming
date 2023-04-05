#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - calculates a number if it's prime number using recursion
 * @n: input number
 * Return: 1 if n is a prime number, 0 if n is not prime
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (actual_prime(n, n - 1));
}


/**
 * actual_prime - calculates a number if it's prime number using recursion
 * @n: input umber
 * @i: iterator
 * Return: 1 if n is prime, 0 if n is not prime
 */
int actual_prime(int n, int i)
{
if (i == 1)
	return (1);
if (n % i == 0 && i > 0)
	return (0);
return (actual_prime(n, i - 1));
}
