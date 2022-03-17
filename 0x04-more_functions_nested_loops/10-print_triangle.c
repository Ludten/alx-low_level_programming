#include "main.h"
/**
 * print_triangle - print triangles
 *
 * @size: argument operand
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = x + 1; y < size; y++)
			{
				_putchar(' ');
			}
			for (z = 0; z < x + 1; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
