#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition
 *
 * @a: num1
 * @b: num2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 *
 * @a: num1
 * @b: num2
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: num1
 * @b: num2
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: num1
 * @b: num2
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus
 *
 * @a: num1
 * @b: num2
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
