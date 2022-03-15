#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success.
 */

int main(void)
{
	int ctr, ovrflw;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	printf("1");

	for (ctr = 2; ctr < 93; ctr++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	a_head = a / 1000000000;
	a_tail = a % 1000000000;
	b_head = b / 1000000000;
	b_tail = b % 1000000000;

	for (; ctr < 99; ctr++)
	{
		ovrflw = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * ovrflw);
		sum_head = (a_head + b_head) + ovrflw;

		printf(", %lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;
	}


	printf("\n");

	return (0);
}
