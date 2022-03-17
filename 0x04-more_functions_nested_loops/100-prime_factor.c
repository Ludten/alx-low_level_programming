#include <stdio.h>

/**
 * main - highest prime
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	long int div = 2;
	long int HFact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			HFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", HFact);
				break;
			}
		}
	}
	return (0);
}
