#include "main.h"

/**
 * print_last_digit - checks if a character is lowecased or not
 *
 * @c: character to check
 *
 * Return: returns 0 if lowercased otherwise return 1
 */
int print_last_digit(int c)
{
	int lastDgt;

	lastDgt = c % 10;

	if (c < 0)
		lastDgt = lastDgt * -1;

	_putchar(lastDgt + '0');

	return (lastDgt);
}
