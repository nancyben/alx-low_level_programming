/**
 * _strncat - strncat
 *
 * @dest: dest
 *
 * @src: src
 *
 * @n: n
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int count;

	len = 0;
	count = 0;

	while (dest[len] != '\0')
	{
		len++;
	}


	while (count < n && src[count] != '\0')
	{
		*(dest + (len + count)) = src[count];
		count++;
	}

	return (dest);
}
