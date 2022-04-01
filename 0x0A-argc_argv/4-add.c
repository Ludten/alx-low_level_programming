#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add all arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, n, x;

	n = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			x = atoi(argv[i]);

			if(isdigit(x))
			{
				n += x;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", n);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
