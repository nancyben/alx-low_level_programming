#include "main.h"

/**
 * print_triangle - generates pyramid kinda
 * @n: number of pyramid
 *
 * Return: nothing.
 */
void print_triangle(int n)
{
	int i, d, j;
	int spaces, blocks;

	for (i = 0; i < n; i++)
	{
		spaces = n - i - 1;
		blocks = n - spaces;

		for (d = 0; d < spaces; d++)
		{
			_putchar(' ');
		}

		for (j = 0; j < blocks; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (i <= 0)
	{
		_putchar('\n');
	}
}
