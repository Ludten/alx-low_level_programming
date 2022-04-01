#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Success
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int count, n;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			n = count;
		}
		printf("%d\n", n);
	}
	else
		printf("0\n");

	return (0);
}
