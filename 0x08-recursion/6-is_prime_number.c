#include "main.h"
#include <stdio.h>
int fakefake(int prime, int primediv);
/**
 * is_prime_number - get prime number of given number
 * @n: is a natural number
 * Return: 1 if n is a prime number and 0 if not.
 */

int is_prime_number(int n)
{
return (fakefake(n, 3));
}

/**
 * fakefake - get the prime number
 * @prime: is a natural number
 * @primediv: is a natural number
 * Return: 1 if n is a prime number and 0 if not.
 */

int fakefake(int prime, int primediv)
{
	if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
 
    // Check for next divisor
    return isPrime(n, i + 1);

}
