#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 or 1 Success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 2)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
