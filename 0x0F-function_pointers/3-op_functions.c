#include "3-calc.h"

/**
  * op_add - returns the sum
  * @a: number
  * @b: addend
  * Return: 0
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference
  * @a: minued
  * @b: subtrahend
  * Return: 0
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns a product
  * @a: multiplier
  * @b: multiplicand
  * Return: 0
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns quotient
  * @a: dividened
  * @b: divisor
  * Return: 0
  */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		printf("Error\n");

	exit(100);
}

/**
  * op_mod - returns modulo
  * @a: argument one
  * @b: argument two
  * Return: 0 if success
  */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		printf("Error\n");

	exit(100);
}
