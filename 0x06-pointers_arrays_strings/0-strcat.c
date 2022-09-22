#include <stdio.h>

/**
 * _strcat - _strcat something
 *
 * @dest: *dest
 *
 * @src: *src
 *
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int count;

	len = 0;
	count = 0;

	while (dest[len] != '\0')
	{
		len++;
	}


	while (src[count] != '\0')
	{
		*(dest + (len + count)) = src[count];
		count++;
	}

	return (dest);
}
