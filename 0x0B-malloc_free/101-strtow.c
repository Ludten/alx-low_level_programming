#include "main.h"
#include <stdlib.h>

/**
 * wordctr - helper function to count the number of w in a string
 * @s: string to evaluate
 *
 * Return: number of w
 */
int wordctr(char *s)
{
	int x, c, y;

	x = 0;
	y = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			y++;
		}
	}

	return (y);
}

/**
 * **strtow - split a string
 *
 * @str: input string
 *
 * Return: str or NULL (Error)
 */

char **strtow(char *str)
{
	char **ptr, *temp;
	int i, k = 0, l = 0, w, c = 0, m, n;

	while (*(str + l))
		l++;
	w = wordctr(str);
	if (w == 0)
		return (NULL);

	ptr = (char **) malloc(sizeof(char *) * (w + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				n = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (m < n)
					*temp++ = str[m++];
				*temp = '\0';
				ptr[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			m = i;
	}

	ptr[k] = NULL;

	return (ptr);
}
