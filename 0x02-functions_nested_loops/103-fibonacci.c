#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success.
 */

int main(void)
{
	int x = 1, y = 2;

	int nextTerm = x + y, sum;

	while (nextTerm <= 4000000)
	{
		x = y;
		y = nextTerm;
		nextTerm = x + y;
		sum += nextTerm;
	}

	printf("%d\n", sum + 3);

	return (0);
}
