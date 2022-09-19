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
	int j, i = 0;

	while (*(str + i))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		putchar(*(str + j));
		j++;
	}

	putchar('\n');
}
