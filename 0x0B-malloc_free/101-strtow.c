#include "main.h"
#include <stdlib.h>

/**
 * wordctr - count num of words
 *
 * @str: pointer to char
 *
 * @i: current index
 *
 * Return: number of words
 **/

int wordctr(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordctr(str, i + 1));
	return (wordctr(str, i + 1));
}
/**
 * _counter - counts number of words
 *
 * @str: pointer to char
 *
 * Return: number of words
 **/
int _counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordctr(str, 0));
	return (wordctr(str, 0));
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
	char **ptr;
	int i, n, m, y;

	if (str == NULL || str[0] == 0)
		return (NULL);
	y = _counter(str);
	if (y < 1)
		return (NULL);
	ptr = malloc(sizeof(char *) * (y + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < y && *str != '\0')
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			ptr[i] = malloc(sizeof(char) * (n + 1));
			if (ptr[i] == NULL)
			{
				while (--i >= 0)
					free(ptr[--i]);
				free(ptr);
				return (NULL);
			}
			m = 0;
			while (m < n)
			{
				ptr[i][m] = *str;
				m++, str++;
			}
			ptr[i][m] = '\0';
			i++;
		}
		str++;
	}
	ptr[i] = '\0';
	return (ptr);
}
