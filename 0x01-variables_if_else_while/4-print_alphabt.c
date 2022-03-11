#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; 'a' <= 'z'; c++)
	{
		for (; c != 'e' && c != 'q'; )
			putchar(c);
	}

	putchar('\n');
	return (0);
}
