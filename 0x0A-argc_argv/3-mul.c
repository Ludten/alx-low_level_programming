#include <stdio.h>

/**
 * main - multiply two arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	return (0);
}
