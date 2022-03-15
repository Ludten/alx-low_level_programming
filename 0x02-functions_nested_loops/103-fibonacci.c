#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success.
 */

int main(void)
{
	int x = 1;
	int y = 1;
	int sum_of_evens = 0;
	int nextTerm = x + y;

	while (y <= 4000000)
	{
		nextTerm = x + y;
		x = y;
		y = nextTerm;
		if ((nextTerm <= 4000000) && (nextTerm % 2 == 0))
			sum_of_evens += nextTerm;
	}

	printf("%d\n", sum_of_evens);

	return (0);
}
