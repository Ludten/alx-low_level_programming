#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success.
 */

int main(void)
{
	unsigned long x = 1, y = 2;

	unsigned long nextTerm = x + y;

	printf("%ld, %ld, ", x, y);

	while (nextTerm <= 4000000)
	{
		printf("%ld, ", nextTerm);
		x = y;
		y = nextTerm;
		nextTerm = x + y;
	}

	return (0);
}
