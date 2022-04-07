#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _iszero - determines if any number is zero
 *
 * @argv: argument vector.
 *
 * Return: no return.
 */

void _iszero(char *argv[])
{
	int i, n = 1, m = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			n = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			m = 0;
			break;
		}

	if (n == 1 || m == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _init_array - set memery to zero in a new array
 *
 * @a: char array.
 *
 * @len: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_init_array(char *a, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
		a[i] = '0';
	a[len] = '\0';
	return (a);
}

/**
 * _checknum - length of the number
 *
 * @argv: arguments vector.

 * @n: row of the array.
 *
 * Return: length of the number.
 */

int _checknum(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}

	return (ln);
}

/**
 * main - multiply two numbers
 *
 * @argc: argument counter
 *
 * @argv: argument vector
 *
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int l1, l2, lout, add, addl, i, j, x, y;
	char *ptr;

	if (argc != 3)
		printf("Error\n"), exit(98);
	l1 = _checknum(argv, 1), l2 = _checknum(argv, 2);
	_iszero(argv), lout = l1 + l2, ptr = malloc(lout + 1);

	if (ptr == NULL)
		printf("Error\n"), exit(98);
	ptr = _init_array(ptr, lout);
	x = lout - 1, i = l1 - 1, j = l2 - 1, y = addl = 0;
	for (; x >= 0; x--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (ptr[x] - '0') + addl;
				if (add > 9)
					ptr[x - 1] = (add / 10) + '0';
				ptr[x] = (add % 10) + '0';
			}
			i = l1 - 1, j--, addl = 0, y++, x = lout - (1 + y);
		}
		if (j < 0)
		{
			if (ptr[0] != '0')
				break;
			lout--;
			free(ptr), ptr = malloc(lout + 1),
					   ptr = _init_array(ptr, lout);
			x = lout - 1, i = l1 - 1, j = l2 - 1, y = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) +
				  (ptr[x] - '0') + addl;
			addl = add / 10, ptr[x] = (add % 10) + '0';
		}
	}
	printf("%s\n", ptr);
	return (0);
}
