#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string operand
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\n':
		case '\t':
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
