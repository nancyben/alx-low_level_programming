#include <string.h>
#include <stdio.h>
/**
 * puts_half - puts_half
 *
 * @str: str
 *
 * Returns: void
 */
void puts_half(char *str)
{
	int l;
	
	l = (strlen(str) / 2);

	while (str[l] != '\0')
	{
		putchar(str[l]);
		l++;
	}

	putchar('\n');
}
