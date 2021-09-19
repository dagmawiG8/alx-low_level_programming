#include "main.h"
#include <stdio.h>

/**
 * function Prototype
 */

int is_prime_func(int prime, int primediv);

/**
 * is_prime_number - get prime number of given number
 * @n: is a natural number
 * Return: 1 if n is a prime number and 0 if not.
 */

int is_prime_number(int n)
{
	return (is_prime_func(n, 3));
}

/**
 * is_prime_func - get the prime number
 * @num: is a natural number
 * @test: is a natural number
 * Return: 1 if n is a prime number and 0 if not.
 */

int is_prime_func(int num, int test)
{
	if (num <= 1 || (num % test == 0 && test <= num / 2))
		return (0);

	else if (num % test != 0 && test > num / 2)
		return (1);

	else
		return (is_prime_func(num, test + 1));
}
