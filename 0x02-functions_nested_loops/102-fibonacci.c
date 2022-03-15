#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success.
 */

int main(void)
{
	int i;

	int x = 1, y = 2;

	int nextTerm = x + y;

	printf("%d, %d, ", x, y);

	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", nextTerm);
		x = y;
		y = nextTerm;
		nextTerm = x + y;
	}
	return (0);
}
