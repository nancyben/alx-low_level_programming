#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - checks if a character is lowecased or not
 * @a: prop1
 *
 * Adds two n
 *
 * Return: return void
 */
void print_to_98(int a)
{
	int counter, c, dec, res;

	counter = abs(98 - a);
	dec = 98 - a;

	for (c = 0; c <= counter; c++)
	{
		res = dec < 0 ? a - c : a + c;
		printf("%d", res);
		if (res != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
