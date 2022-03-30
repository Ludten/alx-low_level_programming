#include "main.h"

int _palindrome(char *s, int i, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check for palindrome
 *
 * @s: string operand
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - length of a string
 *
 * @s: string to operand
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome - check for palindrome
 * @s: string operand
 *
 * @i: iterator
 *
 * @l: length
 *
 * Return: 1 or 0
 */

int _palindrome(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
	return (_palindrome(s, i + 1, l - 1));
}
