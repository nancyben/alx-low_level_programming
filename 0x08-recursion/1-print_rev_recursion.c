#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - _print_rev_recursion
 *
 * @s: s
 *
 * Return: void
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
