#include <stdio.h>
/**
 * _puts - _puts
 *
 * @str: str
 *
 * Return: void
 */
void _puts(char *str)
{
	int l;

	l = 0;

	while (str[l] != '\0')
	{
		putchar(str[l]);
		l++;
	}

	putchar('\n');
}
