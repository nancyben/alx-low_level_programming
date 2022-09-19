#include <string.h>
#include <stdio.h>
/**
 * print_rev - print_rev
 *
 * @s: s
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	l = strlen(s) - 1;

	while (l >= 0)
	{
		putchar(s[l]);
		l--;
	}

	putchar('\n');
}
