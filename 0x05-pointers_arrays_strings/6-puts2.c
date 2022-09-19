#include <stdio.h>
#include <string.h>
/**
 * puts2 - _puts
 *
 * @str: str
 *
 * Return: void
 */
void puts2(char *str)
{
	int l;

	l = 0;

	while (l < (int)strlen(str))
	{
		putchar(str[l]);
		l = l + 2;
	}

	putchar('\n');
}
