#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - print number of arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Success
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	if (argc == 4)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[3]);
		int (*f)(int, int);

		f = get_op_func(argv[2]);

		if (f == NULL || (argv[2][1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}
		if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
		{
			printf("Error\n");
			exit(100);
		}

		printf("%d\n", f(x, y));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
