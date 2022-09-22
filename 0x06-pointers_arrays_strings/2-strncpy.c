#include <string.h>

/**
 * _strncpy - strncpy
 *
 * @dest: dest
 *
 * @src: src
 *
 * @n: n
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *le  = "";
	int len;
	int count;

	len = 0;
	count = 0;

	while (dest[len] != '\0')
	{
		*(le + len) = dest[len];
		len++;
	}


	while (count < n && src[count] != '\0')
	{
		*(le + len + count) = src[count];
		count++;
	}

	return (dest);
}
