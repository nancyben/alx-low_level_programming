#include "main.h"

/**
 * print_triangle - generates pyramid kinda
 * @n: number of pyramid
 *
 * Return: nothing.
 */
void print_triangle(int n)
{
	int d, j;
	int spaces, blocks;
	int count;

	count = 0;

	do {
		if (count == n)
		{
			_putchar('\n');
			break;
		}

		spaces = n - count - 1;
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

		count++;

	} while (count < n);
}
