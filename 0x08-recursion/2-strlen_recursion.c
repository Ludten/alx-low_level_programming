#include "main.h"

/**
 * _strlen_recursion - string length
 *
 * @s: input string
 *
 * Return: i Success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
