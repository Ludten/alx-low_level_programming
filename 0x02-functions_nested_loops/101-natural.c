#include "main.h"
#include <stdio.h>

/**
 * mul_35 - multiples of 3 or 5
 *
 * Return: sum
 */

int mul_35(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (sum);
}

/**
 * main - entry point
 *
 * Return: 0 Success.
 */

int main(void)
{
	printf("%d\n", mul_35());
	return (0); /* return: 0 Success. */
}
