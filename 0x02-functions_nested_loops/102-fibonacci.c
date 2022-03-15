#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success.
 */

int main(void)
{
	int i;

	unsigned long x = 1, y = 2;

	unsigned long nextTerm = x + y;

	printf("%ld, %ld, ", x, y);

	for (i = 3; i <= 50; ++i)
	{
		printf("%ld, ", nextTerm);
		x = y;
		y = nextTerm;
		nextTerm = x + y;
	}
	return (0);
}
