#include "main.h"

/**
 * _atoi - string to an integer
 * @str: string to be converted
 *
 * Return: n
 */
int _atoi(char *str)
{
	int i, d, n, l, f, dgt;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	dgt = 0;

	while (str[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (str[i] == '-')
			++d;

		if (str[i] >= '0' && str[i] <= '9')
		{
			dgt = str[i] - '0';
			if (d % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			f = 1;
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
