#include <string.h>
#include <stdio.h>
/**
 * rev_string - rev_string
 *
 * @s: s
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l;
	int start;
	int end;
	char temp;

	l = strlen(s) - 1;
	end = l;
	start = 0;

	while (end > start)
	{
		temp = s[start];

		*(s + start) = s[end];
		*(s + end) = temp;

		end--;
		start++;
	}
}
